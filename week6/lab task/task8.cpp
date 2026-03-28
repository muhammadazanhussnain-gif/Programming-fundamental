#include <iostream>
using namespace std;

int main() {
    int n1;
    cout << "Enter the number of elements for the first array (must be 2): ";
    cin >> n1;
if (n1 != 2) {
        cout << "First array must have exactly 2 elements." << endl;
        return 0;
    }

int arr1[2];
    cout << "Enter 2 elements for the first array, one per line:" << endl;
    for (int i = 0; i < 2; i++) {
        cin >> arr1[i];
    }
int n2;
    cout << "Enter the number of elements for the second array: ";
    cin >> n2;

    int arr2[n2];
    cout << "Enter " << n2 << " elements for the second array, one per line:" << endl;
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    int result[n1 + n2];


    result[0] = arr1[0];

    for (int i = 0; i < n2; i++) {
        result[i + 1] = arr2[i];
    }
	  result[n2 + 1] = arr1[1];
      cout << "Resulting array: [";
    for (int i = 0; i < n1 + n2; i++) {
        cout << result[i];
        if (i != n1 + n2 - 1)
            cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}