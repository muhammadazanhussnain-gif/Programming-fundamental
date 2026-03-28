#include <iostream>
using namespace std;

int main() {
    string books[100];
    int count = 0;
    int choice;

    do {
        cout << endl;
        cout << "1. Add Books" << endl;
        cout << "2. View Books" << endl;
        cout << "3. Borrow Book" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter book name: ";
            cin >> books[count];
            count++;
        }
        else if (choice == 2) {
            cout << endl;
            cout << "Books List:" << endl;

            for (int i = 0; i < count; i++) {
                cout << i + 1 << ". " << books[i] << endl;
            }

            if (count == 0) {
                cout << "No books available." << endl;
            }
        }
        else if (choice == 3) {
            int num;
            cout << "Enter book number to borrow: ";
            cin >> num;

            if (num >= 1 && num <= count) {
                cout << "You borrowed: " << books[num - 1] << endl;
            } else {
                cout << "Invalid number." << endl;
            }
        }

    } while (choice != 4);

    cout << "Program Ended." << endl;

    return 0;
}