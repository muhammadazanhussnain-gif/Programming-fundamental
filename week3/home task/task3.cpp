#include<iostream>
using namespace std;
int main(){
	int velocity , acceleration , time,finalvelocity;
	
	cout<<"Enter Initial Velocity (m/s): ";
	cin>>velocity;
	
	
	cout<<"Enter Acceleration (m/s^2): ";
	cin>>acceleration;
	
	
	cout<<"Enter Time (s): ";
	cin>>time;
	
	finalvelocity = (acceleration*time)+velocity;
	cout<<"Final velocity (m/s): "<<finalvelocity;
}