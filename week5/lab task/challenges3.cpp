#include <iostream>
using namespace std;

int main(){
  int lines;
  cout<<"Enter number of lines that you want to print";
  cin>>lines;
  for(int i=1 ; i<=lines ; i++){
    for (int j=1 ; j<= i ; j++){
      cout<<"*";
    }
    cout<<endl;
  }
  for(int i = lines ; i >= 1 ; i--){
    for(int j =1 ; j<= i ; j++){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}