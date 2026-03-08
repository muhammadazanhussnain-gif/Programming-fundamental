#include <iostream>
using namespace std;
main() {
int minutes;
int fps;
int frames;

cout<<"Enter Minutes: ";
cin>>minutes;

cout<<"Enter fps: ";
cin>>fps;

frames = minutes * 60 * fps;

cout<<"Total Frames: "<<frames;
}
