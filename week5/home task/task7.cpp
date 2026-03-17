#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
    
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        
        if (num < 200) {
            count1++;
        }
        else if (num < 400) {  
            count2++;
        }
        else if (num < 600) { 
            count3++;
        }
        else if (num < 800) {  
            count4++;
        }
        else { 
            count5++;
        }
    }
    

    int p1 = (count1 * 10000) / n;  
    int p2 = (count2 * 10000) / n;
    int p3 = (count3 * 10000) / n;
    int p4 = (count4 * 10000) / n;
    int p5 = (count5 * 10000) / n;
    

    cout << p1 / 100 << "." << (p1 % 100) / 10 << (p1 % 10) << "%" << endl;
    cout << p2 / 100 << "." << (p2 % 100) / 10 << (p2 % 10) << "%" << endl;
    cout << p3 / 100 << "." << (p3 % 100) / 10 << (p3 % 10) << "%" << endl;
    cout << p4 / 100 << "." << (p4 % 100) / 10 << (p4 % 10) << "%" << endl;
    cout << p5 / 100 << "." << (p5 % 100) / 10 << (p5 % 10) << "%" << endl;
    
    return 0;
}