#include<iostream>
using namespace std;
int main(){
	string shape , square, rectangle,circle,triangle;
	float size , area;
	
	cout<<"Shape: ";
	cin>>shape;
	

	
	if(shape =="square"){
		cout<<"Enter the size of side: ";
	cin>>size;
		area = size*size;
		cout<<"Area: "<<area<<endl;
	}
	if(shape =="rectangle"){
		
		cout<<"Enter the length : ";
	cin>>size;
	
		cout<<"Enter the width ";
		float width;
		cin>>width;
		area = size* width;
		cout<<"Area: "<<area<<endl; 
	}
	if(shape =="circle"){
				cout<<"Enter the radius: ";
	cin>>size;
	
		area = (size*size)*3.14;
		cout<<"Area: "<<area<<endl; 
	}
	if(shape =="triangle"){
		cout<<"Enter base ";
		float base;
		cin>>base;
		
		cout<<"Enter height ";
		float height;
		cin>>height;
		area = 0.5*base*height;
		cout<<"Area: "<<area<<endl;
	}
}