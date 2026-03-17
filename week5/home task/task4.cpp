#include <iostream>
using namespace std;
int main()
{
    int number, digit, lastno, frequency = 0;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the digit to check: ";
    cin >> digit;
    while (number > 0)
    {
        lastno = number % 10;
        number = number / 10;
        if (lastno == digit)
        {
            frequency = frequency + 1;
        }
    }
    cout << "Frequency: " << frequency;
}