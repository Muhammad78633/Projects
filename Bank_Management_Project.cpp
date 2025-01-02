#include <iostream>

using namespace std;

	int i=0;
	
	string Account_Name[100];
	int Account_Number[100];
	string Account_Password[100];
	float Account_Balance[100];
	bool found=false;
	
void create() 
{
    
	cout<<"\n"<<"\t\t\t"<<"______Create Account______"<<"\n\n";
	
	cout<<"\t\t\t"<<"Enter Account Name :  ";
	cin.ignore();
	getline(cin,Account_Name[i]);
	
	cout<<"\t\t\t"<<"Enter Your Account Number :  ";
	cin>>Account_Number[i];
	
	cout<<"\t\t\t"<<"Enter Your Account Password : ";
	cin>>Account_Password[i];
	
	cout<<"\t\t\t"<<"Enter Account Balance :  ";
	cin>>Account_Balance[i];
	
	cout<<"\n"<<"\t\t\t"<<"Your account has been saved successfully! "<<"\n";
	i++;
}

void display()
{
	
	int account_number;
	string account_password;

	cout<<"\n"<<"\t\t\t"<<"______Display Account Details______"<<"\n\n";
	
	if( i==0 ){
		cout<<"\t\t\t"<<"Don't Have Any Account! "<<"\n";
	}else{
		cout<<"\t\t\t"<<"Enter Your Account Number : ";
	    cin>>account_number;
	    
	    cout<<"\t\t\t"<<"Enter Your Account Password : ";
	    cin>>account_password;
	    for(int a=0;a<i;a++){
	    	if(account_number==Account_Number[a] && account_password == Account_Password[a]){
	    		cout<<"\n"<<"\t\t\t"<<"Account Name : "<<Account_Name[a]<<"\n";
	    		cout<<"\t\t\t"<<"Account Number : "<<Account_Number[a]<<"\n";
	    		cout<<"\t\t\t"<<"Account Balance : "<<Account_Balance[a]<<"\n";
	    		found = true;
	    		break;
			}else{
				found = false;
			}
		}
		if(!found){
				cout<<"\n"<<"\t\t\t"<<"Error! ";
			}
	}
}

void deposit()
{
	
	int account_number,amount;
	string account_password;
	
	cout<<"\n"<<"\t\t\t"<<"______Deposit Money______"<<"\n\n";
	
	if( i==0 ){
		cout<<"\t\t\t"<<"Don't Have Any Account!"<<"\n";
	}else{
		
		cout<<"\t\t\t"<<"Enter Your Account Number : ";
		cin>>account_number;
		
		cout<<"\t\t\t"<<"Enter Your Account Password : ";
		cin>>account_password;
		
		for(int a=0;a<i;a++){
			if(account_number == Account_Number[a] && account_password == Account_Password[a]){
				cout<<"\n"<<"\t\t\t"<<"Account Name : "<<Account_Name[a]<<"\n";
				cout<<"\t\t\t"<<"Account Balance : "<<Account_Balance[a]<<"\n";
				
				cout<<"\n";
				cout<<"\t\t\t"<<"----------------------------------------------";
				cout<<"\n";
				
				cout<<"\n"<<"\t\t\t"<<"Deposit Amount : ";
				cin>>amount;
				Account_Balance[a] = Account_Balance[a] + amount;
				
				cout<<"\n"<<"\t\t\t"<<"Your Amount Has been Deposited Successfully! "<<"\n";
				
				found = true;
				break;
			}else{
				found = false;
			}
		}
		if(!found){
			cout<<"\n"<<"\t\t\t"<<"Error! ";
		}
	}
}

void withdraw()
{
	
	int account_number,amount;
	string account_password;
	
	cout<<"\n"<<"\t\t\t"<<"______Withdraw Money______"<<"\n\n";
	
	if( i==0 ){
		cout<<"\t\t\t"<<"Don't have Any Account! "<<"\n";
	}else{
		
		cout<<"\n"<<"\t\t\t"<<"Enter Your Account Number : ";
		cin>>account_number;
		
		cout<<"\t\t\t"<<"Enter Your Account Password : ";
		cin>>account_password;
		
		for(int a=0;a<i;a++){
			if(account_number == Account_Number[a] && account_password == Account_Password[a]){
				cout<<"\n"<<"\t\t\t"<<"Account Name : "<<Account_Name[a];
				cout<<"\n"<<"\t\t\t"<<"Account Balance : "<<Account_Balance[a];
				
				cout<<"\n\n"<<"\t\t\t"<<"----------------------------------------------"<<"\n";
				
				cout<<"\n"<<"\t\t\t"<<"Withdraw Amount : ";
				cin>>amount;
				
				found = true;
				
				if(Account_Balance[a] >= amount){
					Account_Balance[a] = Account_Balance[a] - amount;
					
					cout<<"\n"<<"\t\t\t"<<"Your Amount Has Been Withdraw Successfully! "<<"\n";
					
				}else{
					cout<<"\n"<<"\t\t\t"<<"Inaccurate Amount Entered!";
				}
				
				break;
				
			}else{
					found = false;
			}
		}
		if(!found){
				cout<<"\n"<<"\t\t\t"<<"Error!";
			}
	}
	
	
}

void close()
{
	
	int account_number;
	string account_password;
	
	cout<<"\n"<<"\t\t\t"<<"______Close Account______"<<"\n\n";
	
	if( i==0 ){
		cout<<"\t\t\t"<<"Don't Have Any Account! ";
	}else{
		
		cout<<"\t\t\t"<<"Enter Your Account Number : ";
		cin>>account_number;
		
		cout<<"\t\t\t"<<"Enter Your Account Password : ";
		cin>>account_password;
		
	}
	
	for(int a=0;a<i;a++){
		if(account_number == Account_Number[a] && account_password == Account_Password[a]){
			Account_Number[a] = 0;
			
			cout<<"\n"<<"\t\t\t"<<"Your Account Has Been Deleted Successfully! ";
			
			found = true;
			break;
		}else{
			found = false;
		}
	}
	if(!found){
		cout<<"\n"<<"\t\t\t"<<"Error! ";
	}
}

int main()
{	

	int choice;
	char option;
	
	do{
		
		system("CLS");
		
		cout<<"\n"<<"\t"<<"Welcome to our efficient Bank Management System - where your financial journey begins!"<<"\n";
		cout<<"\n";
	
		cout<<"\t\t"<<"Explore the comprehensive menu of our Bank Management System! "<<"\n";
		cout<<"\n";
	
		cout<<"\t\t\t"<<"1. Create a new account "<<"\n";
		cout<<"\t\t\t"<<"2. Display account details "<<"\n";
		cout<<"\t\t\t"<<"3. Deposit money "<<"\n";
		cout<<"\t\t\t"<<"4. Withdraw money "<<"\n";
		cout<<"\t\t\t"<<"5. Close an account "<<"\n";
		cout<<"\n";
	
		cout<<"\t\t"<<"Enter your choice from this menu :  ";
		cin>>choice;
		cout<<"\n";
    
		switch(choice){
			
			case 1:
				system("CLS");
				create();
				break;
				
			case 2:
				system("CLS");
				display();
				break;
				
			case 3:
				system("CLS");
				deposit();
				break;
				
			case 4:
				system("CLS");
				withdraw();
				break;
				
			case 5:
				system("CLS");
				close();
				break;
				
			default:
				system("CLS");
				cout<<"\n"<<"\t\t\t"<<"Not Found! ";
				
		}
		
		cout<<"\n"<<"\t\t\t"<<"----------------------------------------------"<<"\n";
		
		cout<<"\n"<<"\t\t\t"<<"Do You Want To Continue This Project [y / n] : ";
		cin>>option;
	
		if( option == 'n' || option == 'N' ){
			
			system("CLS");
			cout<<"\n"<<"\t\t\t"<<"Thank You For Using Bank Management Project! ";		
			exit(0);
			
		}
	}
	while( option == 'y' || option == 'Y' );
return 0;
}
