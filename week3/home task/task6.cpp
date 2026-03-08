#include<iostream>
using namespace std;
int main() {
	float fertilizingbag , cost , area ,eachcost , areasquare; 
	cout<<"Enter the size of fertilizing bag in pounds: ";
	cin>>fertilizingbag;
	
	cout<<"Enter the cost of the bag: $";
	cin>>cost;
	
	cout<<"Enter the area in square feet that can be covered by the bags: ";
	cin>>area;
	eachcost = cost/fertilizingbag;
	areasquare = cost/area;
	cout<<"Cost of fertilizing per pounds: $"<<eachcost<<endl;
	cout<<"Cost of fertilizing per square foot: $"<<areasquare;
	
}