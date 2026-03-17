#include <iostream>
using namespace std;

int main() {
    int option;

    while (true) {
        cout << "===== Restaurant Management System =====" << endl;
        cout << "1. View Food Menu" << endl;
        cout << "2. Place Order" << endl;
        cout << "3. View Order Status" << endl;
        cout << "4. Generate Bill" << endl;
        cout << "5. Contact Staff" << endl;
        cout << "6. Exit" << endl;
        cout << "Please select an option (1-6): ";
        cin >> option;

        if (option == 1) {
            cout << "You selected: View Food Menu." << endl;
        }
        else if (option == 2) {
            cout << "You selected: Place Order." << endl;
        }
        else if (option == 3) {
            cout << "You selected: View Order Status." << endl;
        }
        else if (option == 4) {
            cout << "You selected: Generate Bill." << endl;
        }
        else if (option == 5) {
            cout << "You selected: Contact Staff." << endl;
        }
        else if (option == 6) {
            cout << "Exiting Restaurant Management System. Thank you!" << endl;
            break;
        }
        else {
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}