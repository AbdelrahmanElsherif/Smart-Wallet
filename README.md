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
 ## Multi-Thread Server Software (Server)
 . <br /> 
. <br /> 
.  <br />

---
## Nutrition Plan 
- First Part <br />
  Using the patient's info to calculate the daily intake of calories, carbohydrates, protein, calcuim, fibers in a week. <br />
  Determining the body-status of the patient and deciding whether the patient needs to lose weight gain weight or maintain his weight. <br />
  Sending our recommendation to the patient based on the data calculated and the info collected.  <br />
  
- Second Part: <br />
   Populating a map data structure with food items of each food category, each item and its corresponding amount of carbs or protein or calcuim or fibers  <br />
   The map data structures are used to decide which food items are suitable for the patient and that would help him acheive the correct amount of his daily intake from each food      category. <br />
  
 ---
 ## Usage
 - First, Download Client and Server Folder found in the repo. 
 - Run the Server exe 
  > Runs a server on localhost on port 2020
 - Run the Client exe 
 - Experiment with the GUI
  > Not all information collected by the user in the GUI are used to generate the Nutrition plan.
  ---
 ## To create exe on Ubuntu 
  Run the following commands in the project directory terminal (client directory and server directory)<br/>
 - qmake -config release
 - make
 --- 
 
 ## Future Work 
 - Server can be more user friendly, Enabling user to choose hostname and portnumber 
 - Improve code performance using Multi-threading 
 - Improve the Nutrition plan and its accuracy 
 
 ---
 ## Class Diagram 
  ![alt text](https://github.com/DohaMustafa/Nutrition-System/blob/main/ClassDiagram.png?raw=true)  <br />
  
  
