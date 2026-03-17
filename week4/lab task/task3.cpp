#include <iostream>
using namespace std;
int main(){
    int num1, num2, total;
    char function;
    cout << "Enter the 1st number: ";
    cin >> num1;
    
    cout << "Enter the Operation: ";
    cin >> function;
    
    cout << "Enter the 2nd number: ";
    cin >> num2;
    
    if (function == '+')
    {
        total = num1 - num2;
        cout << num1 <<" - "<< num2 << "= " << total;
    }
    if (function == '-')
    {
        total = num1 + num2;
        cout << num1 <<" + "<< num2 << "= " << total;
    }
    if (function == '*')
    {
        total = num1 / num2;
        cout << num1 <<" / "<< num2 << "= " << total;
    }
    if (function == '/')
    {
        total = num1 * num2;
        cout << num1 <<" * "<< num2 << "= " << total;
    }
}