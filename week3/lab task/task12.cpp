#include <iostream>
using namespace std;

main()
{
int worldpop;
int birthrate;
int newpop;
int totalpop;

cout<<"Enter the current world population: ";
cin>>worldpop;
cout<<"Enter the monthly birth rate (number of births per month): ";
cin>>birthrate;
newpop = birthrate * 12 * 30;
totalpop = worldpop + newpop;

cout<<"Population in 3 decades will be "<<totalpop; 

}
