#include<iostream>
using namespace std;
int main(){
	int length , num1 = 0 , num2 = 1 , next;
	cout<<"Enter the length of Fibonacci series: ";
	cin>>length;
			cout<<num1<<","<<num2<<",";
	for(int i=3 ; i<= length ; i++){
		next = num2+ num1;
		cout<<next<<",";
		num1 = num2;
		num2 = next;
		
		
		
		
	}
}