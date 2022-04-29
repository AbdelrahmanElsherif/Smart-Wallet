#include "mythread.h"
#include "currentclient.h"
#include "qfile.h"
#include "qdir.h"
//#include "stack"

MyThread::MyThread(std::unordered_map<int,Client>&mp1,std::unordered_map<std::string,Client>&mp2,int ID, QObject *parent) :
    QThread(parent),
    client(mp1),
    credentianls(mp2)
{
    this->socketDescriptor = ID;
}

void MyThread::run()
{
    //thread starts here
    qDebug() << socketDescriptor << " Starting thread";
    socket = new QTcpSocket();
    if(!socket->setSocketDescriptor(this->socketDescriptor))
    {
        emit error(socket->error());
        return;
    }

    connect(socket,SIGNAL(readyRead()),this,SLOT(readyRead()),Qt::DirectConnection);
    connect(socket,SIGNAL(disconnected()),this,SLOT(disconnected()),Qt::DirectConnection);

    qDebug() << socketDescriptor << " Client Connected";

    exec();
}

void MyThread::readyRead()
{
     QByteArray Data = socket->readAll();

     qDebug() <<  "Client" <<socketDescriptor << "Requet: " << Data;

     std::string ReceivedData=Data.toStdString();
     int pos = ReceivedData.find(":");
     std::string header=ReceivedData.substr(0,pos);
     if(header=="client"){
        int start=pos+1;
        int end=ReceivedData.find(",");

        QString name=QString::fromStdString(ReceivedData.substr(start, end - start));
        start = end+1;
        end = ReceivedData.find(",", start);

        QString uname=QString::fromStdString(ReceivedData.substr(start, end - start));
        start = end+1;
        end = ReceivedData.find(",", start);

        QString password=QString::fromStdString(ReceivedData.substr(start, end - start));
        start = end+1;
        end = ReceivedData.find(",", start);

        QString address=QString::fromStdString(ReceivedData.substr(start, end - start));
        start = end+1;
        end = ReceivedData.find(",", start);

        QString ages=QString::fromStdString(ReceivedData.substr(start, end - start));
        start = end+1;
        end = ReceivedData.find(",", start);

        QString natids=QString::fromStdString(ReceivedData.substr(start, end - start));
        start = end+1;
        end = ReceivedData.find(",", start);

        QString balances=QString::fromStdString(ReceivedData.substr(start, end - start));

        qint64 age=static_cast<quint64>(ages.toULongLong());
        qint64 nationalID=static_cast<quint64>(natids.toULongLong());
        float balance=static_cast<float>(balances.toFloat());

        Client newclient(name,uname,password,address,age,nationalID,balance);
        qDebug()<< "New Client Created";

        if(credentianls.count(uname.toStdString())!=0){
            socket->write("username already taken");
            return;
        }
        credentianls[uname.toStdString()]= newclient;
        if(client.count(socketDescriptor)!=0){
            //qDebug()<<"index changed";
            int index=0;
            while(client.count(index)!=0)index++;
            Client oldclient=client[socketDescriptor];
            client[index]=oldclient;
        }
        client[socketDescriptor]=newclient;

     }
     else if(header=="login"){
         int start=pos+1;
         int end=ReceivedData.find(",");

         QString uname=QString::fromStdString(ReceivedData.substr(start, end - start));
         start = end+1;
         end = ReceivedData.find(",", start);

         QString password=QString::fromStdString(ReceivedData.substr(start, end - start));

         if(credentianls.count(uname.toStdString())==0){qDebug()<<"username not found";socket->write("please check username and password"); return;}
         else{
             qDebug()<<"username found";
             if(client[socketDescriptor].getUserName()==uname&&client[socketDescriptor].getPassword()==password){
                 socket->write("login successful");
                 qDebug()<<"Client "<<client[socketDescriptor].getName() << "logged in";
                 return;}
             else if(client[socketDescriptor].getUserName()==uname&&client[socketDescriptor].getPassword()!=password){
                 qDebug()<<"wrong password";
                 socket->write("please check username and password");
                 return;}
              else{
                     // old client on new thread
                     int index=0;
                     while(client.count(index)!=0)index++;
                     Client oldclient=client[socketDescriptor];
                     client[index]=oldclient;
                     client[socketDescriptor]=credentianls[uname.toStdString()];
                     socket->write("login successful");
                 }
             }

         }

         // Client testclient= client[socketDescriptor];
         // if(uname==testclient.getUserName()&&password==testclient.getPassword()){
             /*currentclient cur;
             cur.setClientName(testclient.getName());
             QString info= "Age: "+ testclient.getAge()+"\r\nNational ID: "+testclient.getID()+"\r\nAddress:"+testclient.getAdd();
             cur.setClientInfo(info);
             cur.show();*/
             // socket->write("login successful");
         // }
         // else{
            // socket->write("please check username and password");
         // }

      else if(header=="deposit"){
         int start=pos+1;
         int end=ReceivedData.find(",");
         float deposited=std::stof(ReceivedData.substr(start, end - start));
         float currentBalance= client[socketDescriptor].account.checkBalance();
         float newbalance=currentBalance+deposited;
         client[socketDescriptor].account.SetBalance(newbalance);
         credentianls[client[socketDescriptor].getUserName().toStdString()].account.SetBalance(newbalance);
         Transaction t;
         t.TransType=deposit;
         t.TransAmount=deposited;
         client[socketDescriptor].TransStack.push(t);
         credentianls[client[socketDescriptor].getUserName().toStdString()].TransStack.push(t);
         qDebug()<<"Deposit Successful";

     }else if(header=="withdraw"){
         int start=pos+1;
         int end=ReceivedData.find(",");
         float withdrawn=std::stof(ReceivedData.substr(start, end - start));
         float currentBalance= client[socketDescriptor].account.checkBalance();
         if(withdrawn<currentBalance){
            float newbalance=currentBalance-withdrawn;
            client[socketDescriptor].account.SetBalance(newbalance);
            credentianls[client[socketDescriptor].getUserName().toStdString()].account.SetBalance(newbalance);
            Transaction t;
            t.TransType=withdraw;
            t.TransAmount=withdrawn;
            client[socketDescriptor].TransStack.push(t);
            credentianls[client[socketDescriptor].getUserName().toStdString()].TransStack.push(t);
            qDebug()<<"Withdraw Successful";
         }else{
            socket->write("withdraw failed");
            qDebug()<<"Withdraw Failed";
         }
     }else if(header=="checkbalance"){
        float currentBalance= client[socketDescriptor].account.checkBalance();
        std::string bs= "balance:" + std::to_string(currentBalance);
        socket->write(bs.c_str());
     }
     else if(header=="redo"){
        if(!client[socketDescriptor].TransStack.empty()){
            Transaction last=client[socketDescriptor].TransStack.top();
            if(last.TransType==deposit){
                float deposited= last.TransAmount;
                float currentBalance= client[socketDescriptor].account.checkBalance();
                float newbalance=currentBalance+deposited;
                client[socketDescriptor].account.SetBalance(newbalance);
                credentianls[client[socketDescriptor].getUserName().toStdString()].account.SetBalance(newbalance);
                Transaction t;
                t.TransType=deposit;
                t.TransAmount=deposited;
                client[socketDescriptor].TransStack.push(t);
                credentianls[client[socketDescriptor].getUserName().toStdString()].TransStack.push(t);
                qDebug()<<"Redo Successful";
            }
            else if(last.TransType==withdraw){
                float withdrawn= last.TransAmount;
                float currentBalance= client[socketDescriptor].account.checkBalance();
                if(withdrawn<currentBalance){
                   float newbalance=currentBalance-withdrawn;
                   client[socketDescriptor].account.SetBalance(newbalance);
                   credentianls[client[socketDescriptor].getUserName().toStdString()].account.SetBalance(newbalance);
                   Transaction t;
                   t.TransType=withdraw;
                   t.TransAmount=withdrawn;
                   client[socketDescriptor].TransStack.push(t);
                   credentianls[client[socketDescriptor].getUserName().toStdString()].TransStack.push(t);
                }else{
                    socket->write("redo failed");
                    qDebug()<<"Redo Failed";
                }
        }
        else{
                socket->write("redo failed");
                qDebug()<<"Redo Failed";}

     }}
      else if(header=="undo"){
         if(!client[socketDescriptor].TransStack.empty()){
             Transaction last=client[socketDescriptor].TransStack.top();
             if(last.TransType==deposit){
                 float withdrawn= last.TransAmount;
                 float currentBalance= client[socketDescriptor].account.checkBalance();
                 if(withdrawn<currentBalance){
                    float newbalance=currentBalance-withdrawn;
                    client[socketDescriptor].account.SetBalance(newbalance);
                    credentianls[client[socketDescriptor].getUserName().toStdString()].account.SetBalance(newbalance);
                    client[socketDescriptor].TransStack.pop();
                    credentianls[client[socketDescriptor].getUserName().toStdString()].TransStack.pop();
                 }else{
                     socket->write("undo failed");
                     qDebug()<<"Undo Failed";}
             }
             else if(last.TransType==withdraw){
                 float deposited= last.TransAmount;
                 float currentBalance= client[socketDescriptor].account.checkBalance();
                 float newbalance=currentBalance+deposited;
                 client[socketDescriptor].account.SetBalance(newbalance);
                 credentianls[client[socketDescriptor].getUserName().toStdString()].account.SetBalance(newbalance);
                 client[socketDescriptor].TransStack.pop();
                 credentianls[client[socketDescriptor].getUserName().toStdString()].TransStack.pop();
             }
         }
         else{
             socket->write("undo failed");
             qDebug()<<"Undo Failed";
             }
     }
     else if(header=="info"){
         QString homePath = QDir::homePath();
         QString filename = homePath+"/Client "+client[socketDescriptor].getName()+" Info.txt";
         QFile file(filename);
               if(file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::ReadWrite))
               {
                   QTextStream stream(&file);

                   stream << "Client Name: "<< client[socketDescriptor].getName() <<"\n"
                          << "Cliet Age: " << client[socketDescriptor].getAge() <<"\n"
                          << "Client National ID: " << client[socketDescriptor].getID()<<"\n"
                          << "Client Address: " << client[socketDescriptor].getAdd()<<"\n"
                          << "Current Balance: " << client[socketDescriptor].getAccount().checkBalance()<<"\n"
                          << "Initial Balance: " << client[socketDescriptor].getInitBalance()<<"\n";

                   file.close();
                   qDebug() << "Client Information Filed Saved";
               }else{qDebug()<<"File Not Open";}
     }
     else if(header=="history"){
         QString homePath = QDir::homePath();
         QString filename = homePath+"/Client "+client[socketDescriptor].getName()+" History.txt";
         QFile file(filename);
               if(file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::ReadWrite))
               {
                   QTextStream stream(&file);
                   std::stack<Transaction> temp=client[socketDescriptor].TransStack;
                   stream << "Current Balance: " << client[socketDescriptor].account.checkBalance()<<"\n";
                   while(!temp.empty()){
                       Transaction top=temp.top();
                       temp.pop();
                       QString type=(top.TransType==deposit)?"Deposit":"Withdraw";
                       stream <<"Transaction Type: " << type <<"\t "<< "Transaction Amount: "<<top.TransAmount <<"\n";
                   }
                   stream << "Initial Balance: " << client[socketDescriptor].getInitBalance()<<"\n";
                   file.close();
                   qDebug() << "Transaction History File Saved";
               }else{qDebug()<<"File Not Open";}
     }

}

void MyThread::disconnected()
{
    qDebug() << socketDescriptor << " Disconnected";

    socket->deleteLater();
    exit(0);
}
