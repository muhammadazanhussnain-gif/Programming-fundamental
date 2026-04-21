#include <iostream>
using namespace std;

float calculate_Balance(float balance, int years)
{
    float rate;

    if(balance < 10000)
        rate = 0.05;
    else if(balance <= 50000)
        rate = 0.07;
    else
        rate = 0.10;

    if(years >= 3)
        rate = rate + 0.02;

    float updated_Balance = balance + (balance * rate);

    return updated_Balance;
}

int main()
{
    float balance;
    int years;

    cout << "Enter balance: ";
    cin >> balance;

    cout << "Enter years: ";
    cin >> years;

    cout << "Updated Balance: " << calculate_Balance(balance, years);

    return 0;
}