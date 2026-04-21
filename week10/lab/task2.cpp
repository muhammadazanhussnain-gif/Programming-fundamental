#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float number , exponent;
    cout<<"Enter the base number: ";
    cin>>number;

    cout<<"Enter the exponent: ";
    cin>>exponent;

    cout<<number<<" raised to power "<<exponent<<" is : "<<pow(number,exponent);
    return 0;


}