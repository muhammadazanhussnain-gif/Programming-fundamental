#include <iostream>
using namespace std;
main()
{
    string name_1, name_2, name_3;
    int age_1, age_2, age_3;
    
    cout << "Enter the name of the 1st Brother: ";
    cin >> name_1;
     cout << "Enter the age of the 1st Brother: ";
    cin >> age_1;
    
    cout << "Enter the name of the 2nd Brother: ";
    cin >> name_2;
     cout << "Enter the age of the 2nd Brother: ";
    cin >> age_2;
    
    cout << "Enter the name of the 3rd Brother: ";
    cin >> name_3;
    cout << "Enter the age of the 3rd Brother: ";
    cin >> age_3;
    

    if (age_1 < age_2){
        if (age_1 < age_3){
            cout << name_1 << " is youngest";
        }
    }
    if (age_2 < age_3){
        if (age_2 < age_1){
            cout << name_2 << " is youngest";
        }
    }
    if (age_3 < age_1){
        if (age_3 < age_2){
            cout << name_3 << " is youngest";
        }
    }
}