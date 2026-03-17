#include <iostream>
using namespace std;
main()
{
    int num, sum = 0;
        cout << "Enter a number: ";
        cin >> num;
    while (num >= 0)
    {
        sum = num + sum;
        cout << "Enter a number: ";
        cin >> num;
    }
    cout << "The Sum is " << sum;
}