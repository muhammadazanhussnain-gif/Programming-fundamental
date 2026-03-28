#include <iostream>
using namespace std;

int main()
{
    string string;

    cout << "Enter a string: ";
    cin >> string;

    cout << "Reversed String: ";
    int n = string.length();
    for(int i = n- 1; i >= 0; i--)
    {
        cout << string[i];
    }

    return 0;
}