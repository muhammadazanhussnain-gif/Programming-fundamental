#include<iostream>
using namespace std;
main(){
	int holidays;
	
	cout<<"Enter Holidays: ";
	cin>>holidays;
	
	int workingday =  365-holidays;
	int timeforgame=  (workingday*63)+(holidays*127);
	int difference =     30000 - timeforgame;
	
	int hours = difference / 60 ;
	int minutes= difference % 60;
	
	if(timeforgame <30000){
		cout<<"Tom sleeps well. "<<endl;
		cout<<hours<<" hours and "<<minutes<<" minutes for play.";
	}
	else{
		difference = (-1)* difference;
		hours =  difference / 60;
		minutes = difference % 60;
		cout<<"Tom will run away. "<<endl;
		cout<<hours<<" hours and "<<minutes<<" minutes for play.";
		
	}
}