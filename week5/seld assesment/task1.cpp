#include<iostream>
using namespace std;
int main(){
	int number, sum;
	
	for(int i=0 ; i<5 ; i++){
		cout<<"Enter number: ";
		cin>>number;
		sum = sum+ number;
		
	}
	cout<<"total sum: "<<sum;
}