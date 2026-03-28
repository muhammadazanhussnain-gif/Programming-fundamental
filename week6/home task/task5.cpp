#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of customers: " << endl;
    cin >> n;

    string customers[n];

    cout << "Enter the names of " << n << " customers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> customers[i];
    }

    char ch;
    cout << "Enter a letter to check: " << endl;
    cin >> ch;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (customers[i][0] == ch) {
            count++;
        }
    }

    cout << "Total names starting with '" << ch << "': " << count << endl;

    return 0;
}