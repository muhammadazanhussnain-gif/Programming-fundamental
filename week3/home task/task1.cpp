#include<iostream>
using namespace std;
int main(){
	int polygon , totalsum;
	
	cout<<"Enter the number of sides of the polygon: ";
	cin>>polygon;
	
	totalsum= (polygon-2)*180;
	
	cout<<"The total sum of internal angles of a : "<<polygon<<"-sided polygon is :"<<totalsum;
}