#include <iostream>
#include <string>
using namespace std;

string OddishOrEvenish(int num)
{
    int sum = 0;
    
    
    while(num > 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
    
    if(sum % 2 == 1)
        return "Oddish";
    else
        return "Evenish";
}

int main()
{
    int num;
    cout << "Enter a five-digit number: ";
    cin >> num;
    cout << OddishOrEvenish(num) << endl;
    return 0;
}

