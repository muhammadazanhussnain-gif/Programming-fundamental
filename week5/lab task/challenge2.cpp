#include <iostream>
using namespace std;
main()
{
    int number , digit ,  frequency = 0;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Enter the digit to check: ";
    cin >> digit;

    while(number > 0 )
    {
        int remainder = number % 10;

        if(remainder == digit)
        {
            frequency++;
        }

        number = number / 10;
    }

    cout << "Frequency: " << frequency << endl;
}