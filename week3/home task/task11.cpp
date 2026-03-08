#include<iostream>
using namespace std;
int main(){
	int personage , movetime;
	
	cout<<"Enter the person's age: ";
	cin>>personage;

	cout<<"Enter the number of times they've moved: ";
	cin>>movetime;

	int average= personage/(movetime+1);

	cout<<"Average number of years lived in the same house: "<<average;

}