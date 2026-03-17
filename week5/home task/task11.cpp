#include <iostream>
using namespace std;

int main() {
    float num1, num2, result;
    int option;

    while (true) {
        cout << "--- Simple Calculator ---" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Clear Screen" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> option;

        if (option == 1) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = num1 + num2;
            cout << "Result: " << result << endl;
        }
        else if (option == 2) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = num1 - num2;
            cout << "Result: " << result << endl;
        }
        else if (option == 3) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = num1 * num2;
            cout << "Result: " << result << endl;
        }
        else if (option == 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            
            if (num2 == 0) {
                cout << "Error! Division by zero is not allowed." << endl;
            }
            else {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            }
        }
        else if (option == 5) {
            system("cls"); 
            cout << "Screen Cleared!" << endl;
        }
        else if (option == 6) {
            cout << "Exiting Calculator. Goodbye!" << endl;
            break;
        }
        else {
            cout << "Invalid Choice! Please try again." << endl;
        }
    }

    return 0;
}