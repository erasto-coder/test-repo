#include<iostream>
using namespace std;
class Login{
	public:
		int password1;
		int password2;
		char username;
		
		
		
		void systemlog(){
			
			cout<<" \n\t\t\t\tplease enter your username"<<endl;
			cin>>username;
			
			cout<<"\n\t\t\t\tplease enter the password "<<endl;
			cin>>password1;
			cout<<"\n\t\t\t\tplease confilm the password you entered"<<endl;
			cin>>password2;
			if(password1!=password2){
				cout<<"\n\t\t\t\tThe password you entered do not match"<<endl;
			}
			else{
				cout<<"you have created account in WAMS-BF system....................."<<endl;
			}
			
					
		}
};

int main(){
	cout<<"\n\n\n\n\t\t\t\t##########################################################"<<endl;
	cout<<"\t\t\t\t################### WELCOME TO THE SYSTEM ################"<<endl;
	cout<<"\t\t\t\t########## THIS IS WORKDERS ATTANDANCE SYSTEM ############"<<endl;
	cout<<"\t\t\t\t########################### USING  THE ###################"<<endl;
	cout<<"\t\t\t\t################### BIOMETRIC FINGER PRINT ###############"<<endl;
	cout<<"\t\t\t\t##########################################################"<<endl;
	
	
	
	
	Login log;
	log.systemlog();
	

	
	return 0;
	
}
