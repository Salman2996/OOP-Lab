#include<iostream>
using namespace std;
class Account
{
	int no;
	char name[20];
	int balance;
	public:
		Account()
		{
			balance=0;
		}
		void deposit()
		{
			int d;
			cout<<"\nEnter amount to be deposited: ";
			cin>>d;
			balance+=d;
		}
		void withdraw()
		{
			int w;
			cout<<"\nEnter amount to be withdrawn: ";
			cin>>w;
			try
			{
				if(w>balance)
				  throw 1;
				else
				  balance-=w;
			}
			catch(int i)
			{
				cout<<"\nWithdraw amount is more than balance amount!!!";
			}
		}
		void getdata()
		{
			cout<<"\nEnter account number: ";
			cin>>no;
			cout<<"\nEnter name: ";
			cin>>name;
		}
		void putdata()
		{
			cout<<"\nAccount number: "<<no;
			cout<<"\nName: "<<name;
			cout<<"\nBalance: "<<balance;
		}
	};
	int main()
	{
		Account a;
		cout<<"\nEnter details:\n";
		a.getdata();
		a.deposit();
		a.withdraw();
		cout<<"\nAccount details are:\n";
		a.putdata();
	}
