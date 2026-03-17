#include <iostream>
using namespace std;
int main()
{
    int rows =5 ;
   
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << j;
        }
        cout <<endl;
    }
}