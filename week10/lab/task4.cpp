#include<iostream>
#include<cmath>
using namespace std;
float  radian( float angle){
    float pi=3.147895;
    float rad= angle * (pi/180);
    return rad;
}
void heigth( float dis, float ang){
    cout<<"The heigth of tree is : "<<dis * tan(ang);
}
int main(){
    float distance ,angle,ang;
    cout<<"Enter distance from the base of tree(in feet): ";
    cin>>distance;
    cout<<"Enter angle of elevation(in degrees): ";
    cin>>angle;
    ang= radian(angle);
    heigth(distance,ang);
}