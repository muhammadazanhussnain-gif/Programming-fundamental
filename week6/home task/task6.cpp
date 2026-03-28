#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    string names[100];

    cout << "Enter names:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }
    sort(names, names + n);

    cout << "Students in alphabetical order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

}