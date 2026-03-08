#include<iostream>
using namespace std;
int main(){
	string name;
	float weight,recomandation;
	
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"Enter the target weight lose in kg: ";
	cin>>weight;
	
	recomandation= weight*15;
	cout<<name<<" will need "<<recomandation<<" days to lose "<<weight<<" by the following doctor suggestion.";
	
	 
}