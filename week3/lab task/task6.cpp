#include<iostream>
using namespace std;
int main(){

string name;
float matric,inter,ecat,aggregate;
float tmatric=11000;
float tinter=550;
float tecat=400;


cout<<"Enter the student's name : ";
cin>>name;
cout<<"Enter the matriculation marks(out of 1100) : ";
cin>>matric;
cout<<"Enter the Intermediate marks(out of 550) : ";
cin>>inter;
cout<<"Enter the ECAT marks (out of 400): ";
cin>>ecat;

float percentage= (matric/tmatric)*40;
float Inper= (inter/tinter)*10;
float eper= (ecat/tecat)*50;
aggregate= percentage+Inper+eper;
cout<<"Aggregate score for "<<name<<" is "<<aggregate<<" %";
}
