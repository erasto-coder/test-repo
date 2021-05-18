#include<iostream>
using namespace std;


int main(){
	int number, reversenumber=0;
	cout<<"number";
	cin>>number;
	while(number!=0){
		reversenumber*=10;
		int lastdigit=number % 10;
		reversenumber += lastdigit;
		number/=10;
	}
	cout<<"reversed:"<<reversenumber;
	
	
	
	system("pause>0");
}
