#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Number of elements must be greater than 0." << endl;
        return 0;
    }

    int arr[n];

    cout << "Enter " << n << " numbers, one per line:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "The largest number entered is: " << largest << endl;

    return 0;
}