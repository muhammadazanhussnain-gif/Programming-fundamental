#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter a Name(Enter End to exit): ";
    cin >> name;

    while (name != "END"  && name!= "end")	
    { cout << "Hello " << name << endl;
        cout << "Enter a Name(Enter End to exit): ";
        cin >> name;
      
    
    }
	
    cout<<"Program End";
}