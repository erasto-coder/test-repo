#include<iostream>
#include<fstream>
#include<cstdlib>

using std::endl;
using std::cin;
using std::cout;
using std::fstream;
using std::ofstream;
using std::ios;

class account_query{
	private:
		char account_number[20];
		char firstname[10];
		char lastname[10];
		float total_Balance;
	public:
		void read_data();
		void show_data();
		void write_rec();
		void read_rec();
		void seach_rec();
		void edit_rec();
		void delete_rec();
		
};

void account_query::read_data(){
	cout<<"\nEnter Account Number:   ";
	cin>>account_number;
	cout<<"\nEnter First Name:   ";
	cin>>firstname;
	cout<<"\nEnter Last Name:   ";
	cin>>lastname;
	cout<<"\nEnter Balance:   ";
	cin>>total_Balance;
	cout<<endl;
	
}
void account_query::show_data(){
	cout<<"Account Number:  "<<account_number<<endl;
	cout<<"First Name:  "<<firstname<<endl;
	cout<<"Last Name:  "<<lastname<<endl;
	cout<<"Current Balance: Rs.  :  "<<total_Balance<<endl;
	cout<<"--------------------------------------------------"<<endl;
	
	
}
void account_query::write_rec(){
	ofstream outfile;
	outfile.open("record.bank", ios::binary|ios::app);
	read_data();
	outfile.write(reinterpret_cast<char *>(this), sizeof(*this));
	outfile.close();
		 
}
void account_query::read_rec(){
/*	ifstream infile;
	infile.open("record.bank", ios::binary);
	if(!infile){
		cout<<"Error in operating! File not found!!"<<endl;
		return;
	}*/
	cout<<"\n****data from file****"<<endl;
	while(!infile.eof()){
		if(infile.read(reinterpret_cast<char*>(this), sizeof(*this))>0){
		show_data();	
		}
		
	}
	infile.close();
}
void account_query::seach_rec(){
	int n;
	ifstream infile;
	infile.open("record.bank", ios::binary);
	if(!infile){
		cout<<"Error in operating! File not found!!"<<endl;
		return;
	}
	infile.seekg(0, ios::end);
	int cout = infile.tellg()/sizeof(*this);
	cout<<"\n There are "<<cout<<" record in the file";
	cout<<"\n Enter Record Number to Seach: ";
	cin>>n;
	infile.seekg((n-1)*sizeof(*this));
	infile.read(reinterpret_cast<char*>(this), sizeof(*this));
	show_data();
	
}
void account_query::edit_rec(){
	int n;
	fstream iofile;
	iofile.open("record.bank", ios::in|ios::binary);
	if(!iofile){
		cout<<"Error in operating! File not found!!"<<endl;
		return;
	}
	iofile.seekg(0, ios::end);
	int cout = iofile.tellg()/sizeof(*this);
	cout<<"\n There are "<<cout<<" record in the file";
	cout<<"\n Enter Record Number to edit: ";
	cin>>n;
	iofile.seekg((n-1)*sizeof(*this));
	iofile.read(reinterpret_cast<char*>(this), sizeof(*this));
	cout<<"Recor"<<n<<"has follwing data"<<endl;
	show_data();
	iofile.close();
	iofile.open("record.bank",ios::out|ios::in|ios::binary);
	iofile.seekp((n-1)*sizeof(*this));
	cout<<"\nEnter data to modify"<<endl;
	read_data();
	iofile.read(reinterpret_cast<char*>(this), sizeof(*this));
	
		
}
void account_query::delete_rec(){
	int n;
	ifstream infile;
	infile.open("record.bank", ios::binary);
	if(!infile){
		cout<<"Error in operating! File not found!!"<<endl;
		return;
		
	}
	infile.seekg(0, ios::end);
	int cout = infile.tellg()/sizeof(*this);
	cout<<"\n There are "<<cout<<" record in the file";
	cout<<"\n Enter Record Number to Seach: ";
	cin>>n;
	fstream tmpfile;
	tmpfile.open("tmpfile.bank",ios::out|ios::binary);
	infile.seekg(0);
	for(int i=0; i<cout; i++){
		iofile.read(reinterpret_cast<char*>(this), sizeof(*this));
		if(i==(n-1))
		    continue;
		tmpfile.write(reinterpret_cast<char*>(this), sizeof(*this));
	}
	infile.close();
	tmpfile.close();
	rename("tmpfile.bank", "record.bank");
}






int main{
	account_query A;
	int choice;
	cout<<"****Account Information System****"<<endl;
	while(true){
		cout<<"\n select one option below ";
		cout<<"\n\t1-->Add record to file ";
		cout<<"\n\t2-->Show record from file ";
		cout<<"\n\t3-->Seach  record from file ";
		cout<<"\n\t4-->Update  record ";
		cout<<"\n\t5-->Delete  record ";
		cout<<"\n\t6-->Quit";
		cout<<"\nEnter your choice: ";
		cin>>choice;
		switch(choice){
			case 1:
				A.write_rec();
				break;
			case 2:
				A.read_rec();
				break;
			case 3:
				A.seach_rec();
				break;
				
			case 4:
				A.edit_rec();
				break;
			case 5:
				A.delete_rec();
			    break;
			case 6:
				exit(0);
				break;
			default:
				cout<<"enter correct choice";
				exit(0);
		}
		
	}
	system("pause");
	return 0;
}
