#include <iostream>
using namespace std;

int main()
{
    char word[100];

    cout << "Enter a word: ";
    cin >> word;

    for(int i = 0; word[i] != '\0'; i++)
    {
        cout << word[i] << " found at position " << i << endl;
    }

    return 0;
}