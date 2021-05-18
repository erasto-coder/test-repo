#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	int height, width;
	cout<<"enter height";
	cin>>height;
	cout<<"enter width";
	cin>>width;
	char symbol;
	cout<<"enter symbol";
	cin>>symbol;
	for(int h=0; h<height;h++)
	{
		for(int w=0; w<width;w++){
			cout<<symbol;
		}
		cout<<setw(5)<<endl;
	}
	
	system("pause>0");
}
