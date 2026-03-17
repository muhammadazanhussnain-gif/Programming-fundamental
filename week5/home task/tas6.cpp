#include <iostream>
using namespace std;

int main()
{
    int num1, num2, i, gcd = 1, lcm;

    cout << "Enter the 1st number: ";
    cin >> num1;
    cout << "Enter the 2nd number: ";
    cin >> num2;

    if (num1 < num2)
        i = num1;
    else
        i = num2;
    while (i > 0)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
            break;
        }
        i--;
    }

    cout << "GCD: " << gcd << endl;

    lcm = (num1 * num2) / gcd;
    cout << "LCM: " << lcm;

    return 0;
}