#include <iostream>
using namespace std;
main()
{
    int number;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    while(number > 0)
    {
        number = number / 10;
        sum = sum+1;
    }

    if(sum == 0)
       sum = 1;

    cout << "Total number of digits: " << sum << endl;
}