#include<iostream>
using namespace std;
int main(){
	float speed;
	
	
	cout<<"Enter speed : ";
	cin>>speed;
	
	if(speed < 10){
		cout<<"Slow"<<endl;
	}
	if(speed >=10){
		if(speed <50){
			cout<<"Average "<<endl;
		}
		if(speed >= 50){
		 if(speed < 150){
		 	cout<<"Fast"<<endl;
		 }
		 if(speed >= 150){
		 	if(speed <= 1000){
		 		cout<<"Ultra fast "<<endl;
			 }
			 else{
			 	cout<<"Extremely fast "<<endl;
			 }
		 }
		}
	}
	
}