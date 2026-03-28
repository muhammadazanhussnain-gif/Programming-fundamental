#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    string productNames[100];
    float prices[100];
    int quantities[100];
    for (int i = 0; i < n; i++) {
        cout << endl;
        cout << "Enter name of product " << i + 1 << ": ";
        cin >> productNames[i];

        cout << "Enter price of " << productNames[i] << ": $";
        cin >> prices[i];

        cout << "Enter quantity of " << productNames[i] << ": ";
        cin >> quantities[i];
    }

    cout << endl;
    cout << "Product Inventory Report" << endl;
    cout << endl;

    for (int i = 0; i < n; i++) {
        float totalValue = prices[i] * quantities[i];

        cout << productNames[i] << ": $"<< prices[i] << ", "<< quantities[i] << " in stock, Total value: $"<< totalValue << endl;
    }

    return 0;
}