#include<iostream>
using namespace std;
int main(){
	int minutes,frame,totalframe;
	
	cout<<"Number of Minutes: ";
	cin>>minutes;
	
	cout<<"Frames per second: ";
	cin>>frame;
	
	totalframe = (frame*60)*minutes;
	cout<<"Total number of frames: "<<totalframe;
	
}