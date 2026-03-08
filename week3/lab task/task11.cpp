#include <iostream>
using namespace std;

main()
{
int win;
int draw;
int lose;
int winpoint = 3;
int drawpoint = 1;
int losepoint = 0;
int totalpoint;

cout<<"Enter the number of wins: ";
cin>>win;
cout<<"Enter the number of draws: ";
cin>>draw;
cout<<"Enter the number of losses: ";
cin>>lose;

totalpoint = (win*winpoint) + (lose*losepoint) + (draw*drawpoint);

cout<<"Pakistan has obtained "<<totalpoint<<" points in the Asia Cup Tournament";

}
