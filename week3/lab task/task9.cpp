#include <iostream>
using namespace std;

main(){
int power;
int volt;
int current;

cout<<"Enter Voltage (in volts): ";
cin>>volt;

cout<<"Enter Current (in Ampares): ";
cin>>current;

power = volt * current;
cout<<" The power is "<<power<<" watts";

}
