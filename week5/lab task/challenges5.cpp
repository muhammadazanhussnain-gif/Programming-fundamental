#include <iostream>
using namespace std;
int main()
{
    string username = "admin", name, course;
    int age, password = 1234, choice;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter your Username: ";
        cin >> username;
        cout << "Enter your Password: ";
        cin >> password;
        if (username == "admin" && password == 1234)
        {
            cout << "Login Successfull" << endl;
            break;
        }
        if (i == 3 )
        {
            cout << "Invalid Credentials! User Blocked" << endl;
            cout << "Program Ends" << endl;
            return 0;
        }
    }
    for (int j = 1; j <= 5; j++)
    {
        cout << "----University Management System----" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View Student" << endl;
        cout << "3. Add Course" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter Student's Name: ";
            cin >> name;
            cout << "Enter Student;s Age: ";
            cin >> age;
            cout << "Student Successfully added!" << endl;
        }
        else if (choice == 2)
        {
            cout << "Student Name: " << name << endl;
            cout << "Student Age: " << age << endl;
        }
        else if (choice == 3)
        {
            cout << "Add Course: ";
            cin >> course;
            cout << "Course added successfully" << endl;
        }
        else if (choice == 4)
        {
            cout << "Program Ends" << endl;
            break;
        }
    }
}