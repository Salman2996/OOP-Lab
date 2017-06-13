#include<iostream>
using namespace std;
class Rectangle
{
	int l,b;
	public:
		void read()
		{
			cout<<"\nEnter the length and breadth:\n";
			cin>>l>>b;
		}
		Rectangle operator+(Rectangle r)
		{
			Rectangle temp;
			temp.l=l+r.l;
			temp.b=b+r.b;
			return temp;
		}
		int operator==(Rectangle r)
		{
			if((l==r.l) && (b==r.b))
			  return 1;
			else
			  return 0;
		}
		friend ostream& operator<<(ostream& , Rectangle&);
};
ostream& operator<<(ostream& out, Rectangle& r)
{
	out<<"\nLength= "<<r.l;
	out<<"\nBreadth= "<<r.b;
	out<<"\nArea= "<<(r.l*r.b);
	out<<"\nPerimeter= "<<2*(r.l+r.b);
	return out;
}
int main()
{
	Rectangle r1,r2,r3;
	r1.read();
	r2.read();
	r3=r1+r2;
	cout<<"\nRectangle 1:\n";
	cout<<r1;
	cout<<"\nRectangle 2:\n";
	cout<<r2;
	cout<<"\nRectangle 3:\n";
	cout<<r3;
	if(r1==r2)
	  cout<<"\nRectangles are equal";
	else
	  cout<<"\nRectangles are not equal";
}
