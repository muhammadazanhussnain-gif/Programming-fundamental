#include<iostream>
using namespace std;
int main() {
string moviename;

float adultticket , childticket , soldadult , soldchild , charity;

cout<<"Enter the movie name: ";
cin>>moviename;


cout<<"Enter the adults ticket price: $";
cin>>adultticket;


cout<<"Enter the  child ticket price: $";
cin>>childticket;

cout<<"Enter the number of adults tickets sold: ";
cin>>soldadult;

cout<<"Enter the  number of child tickets sold: ";
cin>>soldchild; 

cout<<"Enter the percentage of amount to be donated to charity: ";
cin>>charity;

cout<<"----------------------------------------------------"<<endl<<endl;

cout<<"Movie: "<<moviename<<endl;

float totalamount = (soldadult*adultticket) + (soldchild*childticket) ;

float donation = totalamount*(charity/100);

float afterdonation = totalamount- donation;

cout<<"Total Amount generated from tickets sales: $"<<totalamount<<endl;

cout<<"Donation to charity("<<charity<<"%): $"<<donation<<endl;

cout<<"Remaining amount after donation: $"<<afterdonation<<endl;


}