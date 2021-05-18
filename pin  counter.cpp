#include<iostream>
using namespace std;

int main(){
	
	int pin, userpassword= 1234, errorcounter =0;
	do{
		cout<<"PIN";
		cin>>pin;
		if(pin!=userpassword){
			errorcounter++;
		}
	}
	  while(errorcounter<3 && pin!=userpassword);
	  if(errorcounter<3)
	   cout<<"Loading......";
	   
	   else
	   cout<<"Bloacked......";
	   
	   
	  system("pause<0");
	
}
