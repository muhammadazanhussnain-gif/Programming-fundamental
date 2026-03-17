#include<iostream>
using namespace std;
int main(){
	int number , table;
	cout<<"Please enter the table yo want: ";
	cin>>table;
	
	cout<<"Multiplication table of "<<table<<endl;
	
	for(int i=1 ; i<=10 ; i++){
		
		int multiply = table* i ;
		cout<<table<<"*"<<i<<"="<<multiply<<endl;
	}
}