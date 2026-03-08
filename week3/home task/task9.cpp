#include<iostream>
using namespace std;
int main() {
int numbers;

cout<<"Enter the 4 digits numbers: ";
cin>>numbers;

int digit4= numbers%10;
int num3= (numbers/10);
int digit3= num3 % 10;
int num2= num3/10;
int digit2= num2 % 10;
int num1= num2/10;
int digit1= num1 % 10;

int sum= digit1+digit2+digit3+digit4;

cout<<"sum of individuals digits: "<<sum;

}