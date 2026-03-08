#include <iostream>
using namespace std;
main(){
float imposter;
int player;
float chance;

cout<<"Enter Imposters: ";
cin>>imposter;

cout<<"Enter Players: ";
cin>>player;
chance = 100 * (imposter/player);

cout<<"Chance = "<<chance<<"%";

}

