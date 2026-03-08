#include<iostream>
using namespace std;
int main(){
	string countryname , Ireland;
	int ticketprice , discount;
	cout<<"Enter Country Name: ";
	cin>>countryname;
	
		cout<<"Enter Ticket price: ";
	cin>>ticketprice;
	
	if(countryname=="Ireland"){
		discount= ticketprice - (ticketprice*0.1);
		cout<<"Discounted Price: "<<discount;
	}
	else{
		discount= ticketprice - (ticketprice*0.05);
		
		cout<<"Discounted Price: "<<discount;
	}
}