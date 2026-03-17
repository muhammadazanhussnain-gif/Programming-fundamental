#include <iostream>
using namespace std;

int main()
{
    int age, toycost, washingmachinecost;
    int giftmoney = 10, totalmoney = 0, toysreceive = 0;
    int total_sale, savings;

    cout << "Enter Lily's Age: ";
    cin >> age;

    cout << "Enter the price of the Washing Machine: ";
    cin >> washingmachinecost;

    cout << "Enter the Unit Price of each Toy: ";
    cin >> toycost;

    for (int year = 1; year <= age; year++)
    {
        if (year % 2 == 0) 
        {
            totalmoney += (giftmoney - 1); 
            giftmoney += 10;
        }
        else
        {
            toysreceive++;
        }
    }

    total_sale = toysreceive * toycost;
    savings = totalmoney + total_sale;

    if (savings >= washingmachinecost)
    {
        cout << "Yes!" << endl;
        cout << savings - washingmachinecost;
    }
    else
    {
        cout << "No!" << endl;
        cout << washingmachinecost - savings;
    }

    return 0;
}