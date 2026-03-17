#include <iostream>
using namespace std;
int main()
{
    
    int user_pin , pin=1234 , currentbalance= 10000, choice, depositmoney , widhdraw;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter ATM pin:  ";
        cin >>user_pin;
        if (user_pin== pin)
        {
            cout << "Login Successfull" << endl;
            break;
        }
        else{
        	cout<<"wrong pin.. "<<endl;
		}
        if (i == 3)
        {
            cout << "Invalid Credentials! User Blocked" << endl;
            cout << "Program Ends" << endl;
         return 0;
        }
    }
    for (int j = 1; j <= 5; j++)
    {
        cout << "----University Management System----" << endl;
        cout << "1. Check balance" << endl;
        cout << "2. Deposit money" << endl;
        cout << "3. Widhdraw money" << endl;
        cout << " 4. Exit " << endl;
        cout<<"Enter choice: ";
        cin>>choice;
        if (choice == 1)
        {
            cout << "Your current balance is "<<currentbalance<<endl;
        }
        else if (choice == 2)
        {
            cout << "Enter amount of deposit money: ";
            cin>>depositmoney;
            currentbalance = depositmoney + currentbalance;
            cout<<"Money deposit successfully...."<<endl;
      
         
        }
        else if (choice == 3)
        {
      
      cout<<"Enter the amount to widhdraw: ";
      cin>>widhdraw;
      if(widhdraw >= currentbalance){
      	currentbalance -= widhdraw;
      	cout<<"Widhdraw successfully "<<endl;
	  }
	  else{
	  	cout<<"Insufficient amount.."<<endl;
	  	
	  }
        }
        else if (choice == 4)
        {
            cout << "Program Ends" << endl;
            break;
        }
        else{
        	cout<<"Invalid choice ..";
		}
    }
}