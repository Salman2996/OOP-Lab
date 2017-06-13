#include<iostream>
using namespace std;
class Complex
{
	int a,b;
	public:
		Complex(){}
		Complex(int x, int y)
		{
			a=x;
			b=y;
		}
		friend void add(Complex,Complex);
		friend void multiply(Complex,Complex);
		void display()
		{
			cout<<"\n";
			if(b>=0)
			  cout<<a<<"+"<<b<<"i";
			else
			  cout<<a<<b<<"i";
		}
};
void add(Complex c1, Complex c2)
{
	Complex temp;
	temp.a=c1.a+c2.a;
	temp.b=c1.b+c2.b;
	cout<<"\nSum= ";
	temp.display();
}
void multiply(Complex c1, Complex c2)
{
	Complex temp;
	temp.a=((c1.a*c2.a)-(c1.b*c2.b));
	temp.b=((c1.a*c2.b)+(c1.b*c2.a));
	cout<<"\nProduct= ";
	temp.display();
}
int main()
{
	Complex c1,c2;
	int a,b,c,d;
	cout<<"\nEnter real and imaginary parts of first complex number:\n";
	cin>>a>>b;
	cout<<"\nEnter real and imaginary parts of second complex number:\n";
	cin>>c>>d;
	c1=Complex(a,b);
	c2=Complex(c,d);
	cout<<"\nComplex No. 1: ";
	c1.display();
	cout<<"\nComplex No. 2: ";
	c2.display();
	add(c1,c2);
	multiply(c1,c2);
}
