#include <iostream>
using namespace std;
int main(){
    int number, sum = 0, lastno;
    cout << "Enter a number: ";
    cin >> number;
    for (int i = number; i > 0; i = number)
    {
        lastno = number % 10;
        sum = sum + lastno;
        number = number / 10;
    }
    cout << "Sum of Digits: " << sum;
}