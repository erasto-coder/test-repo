#include<iostream>
using namespace std;

int main(){
	
	int number, factorial =1;
	
	cout<<"enter the number";
	cin>>number;
	for(int i= 1; i<=number;i++){
	
	     factorial = factorial * i;
}
	
	cout<<number<<"!="<<factorial;
	
	
	system("pause>0");
}
