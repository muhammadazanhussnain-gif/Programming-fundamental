#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of resistors in the series circuit: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Number of resistors must be greater than 0." << endl;
        return 0;
    }

    float resistance, total = 0;

    cout << "Enter the resistance values (in ohms) of the " << n << " resistors, one per line:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> resistance;
        total += resistance;
    }

    cout << "The total resistance of the series circuit is: " << total << " ohms." << endl;

    return 0;
}