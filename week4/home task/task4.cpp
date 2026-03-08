#include<iostream>
using namespace std;
int main(){
	float redrose , whiterose , tulips , discount;

cout<<"Red     Rose:";
cin>>redrose;
redrose = redrose * 2.00;
cout<<"white   Rose:";
cin>>whiterose;
whiterose = whiterose* 4.10;
cout<<"Tulips      :";
cin>>tulips;
	tulips= tulips*2.50;
	
	float totalprice= redrose + whiterose + tulips;
	
	if(totalprice > 200){
	 discount = totalprice - (totalprice * 0.2);
		cout<<"Orignal Price: "<<totalprice<<endl;
		cout<<"Price after Discount: "<<discount<<endl;
	}
	else{
				cout<<"Orignal Price: "<<totalprice<<endl;
		cout<<"Price after Discount: "<<discount<<endl;
	}

}