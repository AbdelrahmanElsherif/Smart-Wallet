# Smart-Wallet



---
## Smart Wallet Software (Client)
Simple UI implemented using QT C++ in which clients can login in or sign up to monitor and manager their finanicial accounts. <br />
New clients will first have to create new accounts and fill the required data which will be sent to the Server software where it will be stored then user ill be able to login in to the system and manager his account as he wishes, Previous users of the software will be able to login directly to the system without any extra steps. <br />
Each user will be given unique ID and is able to manage his account using various operations like Deposit, Withdraw, Check Balance, Print Account details and Print transaction history. <br />
This software mainly consists of two classes Client and Account classes which have a composition relationship where each Client HAS A Account. <br />
Account class contains a stack of transactions the user can perform like Deposit and Withdraw, User can redo or undo any of these transactions, it also contains a struct which contains the transation type and a float value of the amount to be deposited or withdrawn.  <br /> 
These info will be sent to the server to process it and then recieve the correct values to be displayed to the user. <br />

 ---
 ## Multi-Server Software (Server)
 Multi-threaded server that runs in localhost on port 1234, that enables different clients to connect to the same server with each client started a new thread is created for this client in which user can perform all operations mentioned before. <br /> 
Server recives data entered by the user like Name, UserName, Password, Balance, NationalID, address and age from the UI side, these data is saved on Memory and used in the operations and transactions the user performs. <br /> 
Server sends data after being processed according to the operation the user performed andthe data can be displayed smoothly in UI.  <br />
Server saves transaction history and account details to hard disk and sends them to UI when requested y the user. <br />

---
## Smart Wallet System Flow 
- Login and Access to the system <br />
  1. In case of new user, User is required to fill some necessary information like Name,        UserName, Password, Balance, NationalID, address and age and he will be   able to log in to samrt wallet system using the information previously filled. <br />
  2. In case of previously registered user, User will be able to log in using username and password. <br />
  3. In case login information filled(UserName and Password) are sent to the server and the server checks for the validity of these credentials, In case credentials     are validated the user will have access to his account on the smart wallet system and its various operations but in case credentials are not validated, Error message   stating the login failed will be dislayed to te user. <br />
  
- Smart Wallet System: <br />
   1. User has access to smart wallet system and is able to perform different transactions like Deposit and withdrawal of money to his current balance, Both Redo and      Undo of these transactions are supported, In case of withdrawl or deposit failure error messages is displayed to warn the user of the failure occurred. <br />
   2. These transactions are stored in a stack of transactions to facilitate the redo and undo operations.  <br />
   3. Operations like Checking user current balance, printing transaction history and printing account details are supported as well  <br />

 ---
 ## Usage
 - First, Download SmartWallet and MultiServer Folders found in the repo. 
 - Run the Server exe 
 - Run the Client exe 
 - Experiment with the GUI
  ---
 ## To create exe on Ubuntu 
  Run the following commands in the project directory terminal (client directory and server directory)<br/>
 - qmake -config release
 - make
 --- 
 
 ## Future Work 
 - 
 
 ---
 ## Class Diagram 
  ![alt text](https://github.com/DohaMustafa/Nutrition-System/blob/main/ClassDiagram.png?raw=true)  <br />
  
  
