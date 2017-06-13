#include<iostream>
using namespace std;
inline int max(int x,int y,int z)
{
	int m= ((x<y)?y:x);
	return ((m<z)?z:m);
}
int main()
{
	int a,b,c,m;
	cout<<"\nEnter three numbers:\n";
	cin>>a>>b>>c;
	m=max(a,b,c);
	cout<<"\nMaximum number is "<<m;
}
