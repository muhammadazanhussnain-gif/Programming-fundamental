#include <iostream>
using namespace std;
main(){
float squaremeter;
int width;
int height;
int walls;

cout<<"Enter Paint Area: ";
cin>>squaremeter;

cout<<"Enter width: ";
cin>>width;

cout<<"Enter height: ";
cin>>height;

walls = squaremeter / (width*height);

cout<<"Walls painted: "<<walls;

}

