#include<iostream>
using namespace std;

class bankdemo
{
	char name[50];
	int accno;
	char actype[20];
	float balance;
	
	public:
		
		bankdemo()
		{
			accno=0000;
			balance=0.0;
			
		}
	void input();
	void deposit();
	void withdraw();
	void display();
	
};

void bankdemo::input()
{
	cout<<"\n Enter All Information: ";
	cout<<"\n Enter Name Account Number: ";
	cin>>name;
	cout<<"\n Enter account Number: ";
	cin>>accno;
	cout<<"\n Enter Account Type: ";
	cin>>actype;
	cout<<"\n Enter Amount To Deposite: ";
	cin>>balance;
}

void bankdemo::deposit()
{
	float a;
	cout<<"\n Deposit: ";
	cout<<"\n Enter Amount To Deposit: ";
	cin>>a;
	balance+=a;
}
void bankdemo::withdraw()
{
	float amount;
	cout<<"\n Withdraw: ";
	cout<<"\n Enter amount to withdraw: ";
	cin>>amount;
	balance-=amount;
}

void bankdemo::display()
{
	cout<<"Account Details is: ";
	cout<<"\n NAme of Depositeor: "<<name<<endl;
	cout<<"\n Account number: "<<accno<<endl;
	cout<<"\n Account Type: "<<actype<<endl;
	cout<<"\n balance:"<<balance<<endl;
	
}
int main()
{
	bankdemo bd;
	int choice=1;
	while(choice!=0)
	{
		cout<<"Enter 0 for exit\n 1. create new account. \n 2. deposit\n 3. withdraw\n 4. see account status:";
		cin>>choice;
		switch(choice)
		{
			case 0: bd.display();
			cout<<"\n Accounts:";
			break;
			case 1: bd.input();
			break;
			case 2: bd.deposit();
			break;
			case 3: bd.withdraw();
			break;
			case 4: bd.display();
			break;
			default: cout<<"Invalid option:"<<endl;
		}
	}
}
