# Smart-Wallet



---
## Smart Wallet Software (Client)
Simple UI implemented using QT C++ in which clients can login in or sign up to monitor and manager their finanicial account. <br />
New clients will first have to create new account and fill the required data which will be sent to the Server software where it will be stored in the memory then user will be able to login into the system and manage the account. Previous users of the software will be able to login directly to the system without any extra steps. <br />
Each user will be given an account with a unique ID and will be able to manage the account using various operations like Deposit, Withdraw, Check Balance,  Redo Last Transaction, Undo Last Transaction, Print Account details and Print transaction history. <br />
The Server mainly consists of two classes Client and Account classes which have a composition relationship where each Client HAS A Account. <br />
 ![alt text](https://github.com/AbdelrahmanElsherif/Smart-Wallet/blob/main/Class%20Diagram.png?raw=true)  <br />
These information will be sent to the server to process it and then recieve the correct values to be displayed to the user. <br />

 ---
 ## Multi-Server Software (Server)
 Multi-threaded server that runs in localhost on port 1234, that enables different clients to connect to the same server with each client started a new thread is created for this client in which user can perform all operations mentioned before. <br /> 
Server recives data entered by the user like Name, UserName, Password, Balance, NationalID, Address and Age from the UI side, these data is saved in memory and used in the operations performed by the user. <br /> 
Server sends data after being processed according to the operation the user performed and the data can be displayed smoothly in UI.  <br />
In Case an error occured, and error message is displayed in the console of the server indicating the error type, and a message is send to the client showing a message box to the user showing the error. <br />
Server saves transaction history and account details to disk for printing when requested by the user. <br />
While the server is running, the user can close the account and login more than once, but once the server is closed the client will not be able to login again and the user will have to sign up again as the client information is saved in memory not on disk. <br />


---
## Smart Wallet System Flow 
- Login and Access to the system <br />
  1. In case of new user, user is required to fill some necessary information like Name, UserName, Password, Balance, NationalID, Address and Age and the user will be able to login to samrt wallet system using the information previously filled. <br />
  2. The Username is unique for each new user, so if a user tries to use a previously used username, an error message appears. <br />
  3. In case of previously registered user, user will be able to log in using username and password. <br />
  4. Login information filled(UserName and Password) are sent to the server and the server checks for the validity of these credentials, In case credentials are validated the user will have access to his account on the smart wallet system and its various operations but in case credentials are not validated, An Error message stating that the login operation failed will be dislayed to te user. <br />
  

 ---
 ## Usage
 - First, Download SmartWallet and MultiServer Folders found in the repo. 
 - Run the Server exe 
 - Run the SmartWallet exe 
 - 
  ---
 ## To create exe on Ubuntu 
  Run the following commands in the project directory terminal (client directory and server directory)<br/>
 - qmake -config release
 - make
 --- 
 
 ## Future Work 
 - Save the user information on the disk upon closing the server, so that the server can be restarted without the information being lost.
 

  
  
