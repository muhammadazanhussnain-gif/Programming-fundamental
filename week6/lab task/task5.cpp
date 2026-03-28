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
    int size = 0; 

    cout << "Enter " << n << " numbers, one per line:" << endl;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        bool found = false;
        for (int j = 0; j < size; j++) {
        if (arr[j] == num) {
                cout << "Already Entered: " << num << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            arr[size] = num;
            size++;
        }
    }
 cout << "Unique numbers entered: ";
for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}