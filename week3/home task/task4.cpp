#include<iostream>
using namespace std;
int main(){
	float impostercount , playercount , chance;
	
	cout<<"Enter Imposter Count: ";
	cin>>impostercount;
	
	
	cout<<"Enter PLayer Count): ";
	cin>>playercount;
	
	chance = 100*(impostercount/playercount);
	
	cout<<"Chance of being an imposter: "<<chance<<"%";
}