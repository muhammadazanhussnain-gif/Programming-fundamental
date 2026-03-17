#include <iostream>
using namespace std;
int main()
{
    char ch;
    
    cout << "Enter any character in lower case: ";
    cin >> ch;

    if (ch== '0'|| ch == '1'|| ch== '2'|| ch == '3'|| ch== '4'|| ch == '5'|| ch== '6'|| ch == '7'|| ch== '8'|| ch == '9'|| ch=='10'){
        cout << "It is a number.";
    }
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        cout << "It is a vowel.";
    }
    else {
        cout << "It is a constant.";
    }
}