#include<iostream>
using namespace std;
class Matrix
{
	int *a;
	int r,c;
	public:
		Matrix(){}
		Matrix(int x)
		{
			r=x;
			c=x;
			a=new int[r*c];
		}
		Matrix(Matrix &m)
		{
			r=m.r;
			c=m.c;
			a=new int[r*c];
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				  a[i*c+j]=m.a[i*c+j];
			}
		}
		void getdata()
		{
			cout<<"\nEnter the matrix elements:\n";
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				  cin>>a[i*c+j];
			}
		}
		void putdata()
		{
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				  cout<<a[i*c+j]<<" ";
				cout<<"\n";
			}
		}
		friend Matrix operator+(Matrix, Matrix);
		friend Matrix operator*(Matrix, Matrix);
		Matrix& operator=(const Matrix &m)
		{
			r=m.r;
			c=m.c;
			a=new int[r*c];
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				  a[i*c+j]=m.a[i*c+j];
			}
			return *this;
		}
		~Matrix()
		{
			delete a;
			cout<<"\nObject deleted!!!";
		}
};
Matrix operator+(Matrix m, Matrix n)
{
	Matrix temp(m.r);
	for(int i=0;i<temp.r;i++)
	{
		for(int j=0;j<temp.c;j++)
		    temp.a[(i*temp.c)+j]=m.a[(i*temp.c)+j]+n.a[(i*temp.c)+j];
	}
	return temp;
}
Matrix operator*(Matrix m, Matrix n)
{
	Matrix temp(m.r);
	for(int i=0;i<temp.r;i++)
	{
		for(int j=0;j<temp.c;j++)
		{
			temp.a[(i*temp.c)+j]=0;
			for(int k=0;k<temp.c;k++)
		        temp.a[(i*temp.c)+j]+=(m.a[(i*temp.c)+k]*n.a[(k*temp.c)+j]);
		}
	}
	return temp;
}
int main()
{
	int o;
	cout<<"\nEnter order of the matrices: ";
	cin>>o;
	Matrix p(o), q(o), r, s;
	p.getdata();
	q.getdata();
	cout<<"\nFirst Matrix:\n";
	p.putdata();
	cout<<"\nSecond Matrix:\n";
	q.putdata();
	/*cout<<"\nFirst Matrix copied";
	Matrix copy(p);
	cout<<"\nCopy:\n";
	copy.putdata();*/
	r=p+q;
	s=p*q;
	cout<<"\nSum of the 2 matrices:\n";
	r.putdata();
	cout<<"\nProduct of the 2 matrices:\n";
	s.putdata();
}
