#include<iostream>
#include<math.h>
using namespace std;
class Octal
{
	int n;
	public:
		Octal(){}
		Octal(int x)
		{
			n=0;
			int d;
			while(x!=0)
			{
				d=x%8;
				n=(n*10)+d;
				x/=8;
			}
			int rev=0, temp=n;
			while(temp!=0)
			{
				d=temp%10;
				rev=(rev*10)+d;
				temp/=10;
			}
			n=rev;
		}
		friend Octal operator+(Octal o, int k);
		friend ostream& operator<<(ostream& , Octal&);
		operator int()
		{
			int x=0,d,i=0;
			int temp=n;
			while(temp!=0)
			{
				d=temp%10;
				x+=(d*pow(8,i));
				temp/=10;
				i++;
			}
			return x;
		}
};
Octal operator+(Octal o, int k)
{
	int d=0, temp=0, x=k;
	while(k!=0)
	{
		d=k%8;
		temp=(temp*10)+d;
		k/=8;
	}
	int rev=0;
	while(temp!=0)
	{
		d=temp%10;
		rev=(rev*10)+d;
		temp/=10;
	}
	o.n+=rev;
	cout<<"\nSum(in octal)= "<<o;
	return o;
}
ostream& operator<<(ostream &out, Octal &o)
{
	out<<o.n;
	return out;
}
int main()
{
	int x,k;
	cout<<"\nEnter a number to be converted to octal: ";
	cin>>x;
	Octal h=x;
	cout<<"\nThe octal equivalent of the number is "<<h;
	cout<<"\nEnter number to be added: ";
	cin>>k;
	int y=h+k;
	cout<<"\nSum(in decimal)= "<<y;
}

