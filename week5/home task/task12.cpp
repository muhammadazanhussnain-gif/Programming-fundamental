#include <iostream>
using namespace std;

int main() {
    int choice;
    string book;
    bool bookAdded = false;  

    while (true) {
        cout << "===== Library System =====" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. View Book" << endl;
        cout << "3. Borrow Book" << endl;
        cout << "4. Issue Book" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter book name: ";
            cin >> book;  
            cout << "You added a book: " << book << endl;
            bookAdded = true;
        }
        else if (choice == 2) {
            if (bookAdded == true) {
                cout << "Book in inventory: " << book << endl;
            }
            else {
                cout << "No books in inventory. Please add a book first." << endl;
            }
        }
        else if (choice == 3) {
            cout << "You selected: Borrow Book" << endl;
        }
        else if (choice == 4) {
            cout << "You selected: Issue Book" << endl;
        }
        else if (choice == 5) {
            cout << "Exiting Library System. Goodbye!" << endl;
            break;
        }
        else {
            cout << "Invalid Choice! Please try again." << endl;
        }
    }

    return 0;
}