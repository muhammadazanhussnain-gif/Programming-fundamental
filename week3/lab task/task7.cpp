#include <iostream>
using namespace std;

main()
{
int mb;
int kb1 = 1024;
int byte1 = 1024;
int bit1 = 8;
int mbsinbit;
cout<<"Enter the size in megabytes (MB): ";
cin>>mb;
mbsinbit = mb * kb1 * byte1 * bit1;

cout<<mb<<" MB is equivalent to "<<mbsinbit<<"bits";
}