#include<iostream>
using namespace std;
class Matrix
{
	int a[5][5];
	int m,n;
	public:
		void read()
		{
			cout<<"\nEnter the number of rows and columns:\n";
			cin>>m>>n;
			cout<<"\nEnter matrix elements:\n";
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				   cin>>a[i][j];
			}
		}
		int operator==(Matrix m1)
		{
			if((m==m1.m) && (n==m1.n))
			   return 1;
			else
			   return 0;
		}
		Matrix operator+(Matrix m1)
		{
			Matrix temp;
			temp.m=m;
			temp.n=n;
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				  temp.a[i][j]=a[i][j]+m1.a[i][j];
			}
			return temp;
		}
		Matrix operator-(Matrix m1)
		{
			Matrix temp;
			temp.m=m;
			temp.n=n;
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				  temp.a[i][j]=a[i][j]-m1.a[i][j];
			}
			return temp;
		}
		friend ostream& operator<<(ostream& , Matrix&);
};
ostream& operator<<(ostream& out, Matrix& m1)
{
	for(int i=0;i<m1.m;i++)
	{
		for(int j=0;j<m1.n;j++)
		  out<<m1.a[i][j]<<" ";
		out<<"\n";
	}
	return out;
}
int main()
{
	Matrix m1,m2,m3,m4;
	cout<<"\nMatrix 1:\n";
	m1.read();
	cout<<"\nMatrix 2:\n";
	m2.read();
	cout<<"\nMatrix 1:\n";
	cout<<m1;
	cout<<"\nMatrix 2:\n";
	cout<<m2;
	if(m1==m2)
	{
		m3=m1+m2;
		m4=m1-m2;
		cout<<"\nSum of Matrices:\n";
		cout<<m3;
		cout<<"\nDifference of Matrices:\n";
		cout<<m4;
	}
	else
	  cout<<"\nNot possible";
}
