#include <iostream>
using namespace std;

int main()
{
    float inheritance;
    int finalYear ,age = 18;

    cout << "Enter Money: ";
    cin >> inheritance;

    cout << "Enter Year: ";
    cin >> finalYear;

    for (int year = 1800; year <= finalYear; year++)
    {
        if (year % 2 == 0)
        {
            inheritance -= 12000;
        }
        else
        {
            inheritance -= (12000 + 50 * age);
        }

        age++;
    }

    if (inheritance >= 0)
    {
        cout << "Yes! He will live a carefree life and will have "
             << inheritance << " dollars left.";
    }
    else
    {
        cout << "He will need " << -inheritance << " dollars to survive.";
    }

    return 0;
}