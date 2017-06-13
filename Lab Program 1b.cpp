#include<iostream>
using namespace std;
float si(int p,int t=1,float r=0.12);
int main()
{
	int p,t;
	float r;
	cout<<"\nEnter principal, time and rate:\n";
	cin>>p>>t>>r;
	float interest;
	interest=si(p,t,r/100.0);
	cout<<"\nSimple Interest (without default values)= "<<interest;
	interest=si(p);
	cout<<"\nSimple Interest (with default values)= "<<interest;
}
float si(int p,int t,float r)
{
	return (p*t*r);
}
