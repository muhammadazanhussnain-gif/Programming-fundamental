#include<iostream>
using namespace std;
int main() {
	
	float vegatableprice,fruitprice;
	int totalvegatable , totalfruits;
	
	cout<<"Enter vegatable price per kilogram (in coin): ";
	cin>>vegatableprice;
	
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>>fruitprice;
	
	cout<<"Enter the total kilograms of vegatables: ";
	cin>>totalvegatable;
	
	cout<<"Enter the total kilograms of fruits: ";
	cin>>totalfruits;
	
	float vegatableearning = (vegatableprice*totalvegatable)/1.94;
	
	float fruitearning = (fruitprice*totalfruits)/1.94;
	
	float totalearning= vegatableearning + fruitearning;
	
	cout<<"Total earnings in Rupees(Rps): "<<totalearning;
}