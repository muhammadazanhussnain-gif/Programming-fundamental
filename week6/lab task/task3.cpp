#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (str[i] == 'z')
                str[i] = 'a';
            else
                str[i] = str[i] + 1;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            if (str[i] == 'Z')
                str[i] = 'A';
            else
                str[i] = str[i] + 1;
        }
    }

    cout << "Shifted String: " << str << endl;

    return 0;
}