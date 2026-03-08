#include<iostream>
using namespace std;
int main(){
	int paint,width,height;
	
	cout<<"Number of square meters you can paint: ";
	cin>>paint;
	cout<<"Width of the single wall (in meters): ";
	cin>>width;
	
	cout<<"Heikght of walls you can paint: ";
	cin>>height;
	
	int youpaint = paint/(width*height);
	
	cout<<"Numbers of walls you can paint: "<<youpaint;
}