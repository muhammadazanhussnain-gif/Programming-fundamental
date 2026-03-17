#include <iostream>
using namespace std;
int main(){
    int salary = 10000,  laptopPrice = 50000;
    int advance = (salary*0.5);

    if(advance >= laptopPrice)
    {
       int month= advance *6;
	    cout << "Ali can buy the laptop with advance salary." << month<<endl;
    }
    else {
        int months = laptopPrice / advance;

 
        cout << "Months required to buy laptop: " << months << endl;
    }

}