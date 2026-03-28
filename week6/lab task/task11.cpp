#include <iostream>
using namespace std;

int main() {
    string input, result = "";

    getline(cin, input);

    for (char c : input) {
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
              c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
            result += c;
        }
    }

    cout << result;

    return 0;
}