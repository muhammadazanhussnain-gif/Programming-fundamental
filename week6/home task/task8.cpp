#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of flights: ";
    cin >> n;

    int flightNumber[100];
    string destination[100];
    int seatsAvailable[100];

    for (int i = 0; i < n; i++) {
        cout << endl;
        cout << "Enter flight number for flight " << i + 1 << ": ";
        cin >> flightNumber[i];

        cout << "Enter destination for flight " << flightNumber[i] << ": ";
        cin >> destination[i];

        cout << "Enter seats available for flight " << flightNumber[i] << ": ";
        cin >> seatsAvailable[i];
    }

    cout << endl;
    cout << "Flight Information:" << endl;
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << "Flight " << flightNumber[i]<< " to " << destination[i]<< " has " << seatsAvailable[i]<< " seats available." << endl;
    }
    cout << endl;
    cout << "Flights with less than 5 seats available:" << endl;
    cout << endl;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (seatsAvailable[i] < 5) {
            cout << "Flight " << flightNumber[i]<< " to " << destination[i]<< " has only " << seatsAvailable[i]<< " seats left!" << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No flights with less than 5 seats available." << endl;
    }

    return 0;
}