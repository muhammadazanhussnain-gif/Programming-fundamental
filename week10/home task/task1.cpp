#include <iostream>
using namespace std;

string pyramidVolume(float l, float w, float h, string unit)
{
    double volume = (l * w * h) / 3.0; 
    if(unit == "millimeters")
        volume = volume * 1000000000;   
    else if(unit == "centimeters")
        volume = volume * 1000000;    
    else if(unit == "kilometers")
        volume = volume / 1000000000;   

    return to_string(volume) + " cubic " + unit;
}

int main()
{
    float length, width, height;
    string unit;

    cout << "Enter length width height (in meters): ";
    cin >> length >> width >> height;

    cout << "Enter unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;

    cout << pyramidVolume(length, width, height, unit);

    return 0;
}