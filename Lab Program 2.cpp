#include<iostream>
using namespace std;
class Calc
{
	int a,b;
	char op;
	public:
		void add()
		{
			cout<<"\nSum= "<<(a+b);
		}
		void subtract()
		{
			cout<<"\nDifference= "<<(a-b);
		}
		void multiply()
		{
			cout<<"\nProduct= "<<(a*b);
		}
		void divide()
		{
			if(b!=0)
			  cout<<"\nQuotient= "<<(a/b);
			else
			  cout<<"\nNot possible";
		}
		void read()
		{
			cout<<"\nEnter two numbers:\n";
			cin>>a>>b;
		}
		friend void mean(Calc);
};
void mean(Calc c)
{
	float avg;
	avg=(c.a+c.b)/2.0;
	cout<<"\nMean= "<<avg;
}
int main()
{
	Calc c;
	c.read();
	int choice;
	cout<<"\nEnter choice:\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n";
	cin>>choice;
	int flag;
	do
	{
		flag=0;
		switch(choice)
		{
			case 1:
				c.add();
				break;
			case 2:
				c.subtract();
				break;
			case 3:
				c.multiply();
				break;
			case 4:
				c.divide();
				break;
			default:
				flag=1;
		}
	}while(flag==1);
	mean(c);
}
