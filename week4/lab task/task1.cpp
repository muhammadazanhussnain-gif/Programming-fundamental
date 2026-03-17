#include<iostream>
using namespace std;
int main(){
	float bill, discount;
	
	cout<<"Enter your bill: ";
	cin>>bill;
	
	if(bill <= 5000){
		discount = bill -(bill*0.05);
		cout<<"Your Discounted price: "<<discount;
	}
		if(bill > 5000){
		discount = bill -(bill*0.1);
		cout<<"Your Discounted price: "<<discount;
	}
}