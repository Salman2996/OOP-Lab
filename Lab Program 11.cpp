#include<iostream>
using namespace std;
template <class T>
class Queue
{
	T item[10];
	int f,r;
	public:
		Queue()
		{
			f=0;
			r=-1;
		}
		void insert(T ele)
		{
			if(r==9)
			 cout<<"\nOverflow!!!";
			else
			{
				r++;
				item[r]=ele;
			}
		}
		void remove()
		{
			if(r<f)
			 cout<<"\nUnderflow!!!";
			else
			{
				cout<<"\nDeleted element is: "<<item[f];
				f++;
			}
		}
		void display()
		{
			if(r<f)
			 cout<<"\nEmpty!!!";
			else
			{
				for(int i=f;i<=r;i++)
				   cout<<"\n"<<item[i];
			}
		}
	};
	template <class X>
	void enter(X a)
	{
		Queue <X> q;
		X n;
		int flag=0,choice;
		char ch='y';
		while(ch=='y' || ch=='Y')
		{
			do
			{
				cout<<"\nEnter choice :\n1.Insert\n2.Delete\n3.Display\n";
				cin>>choice;
				flag=0;
				switch(choice)
				{
					case 1:
						cout<<"\nEnter element: ";
						cin>>n;
						q.insert(n);
						q.display();
						break;
					case 2:
						q.remove();
					case 3:
						q.display();
						break;
					default:
						flag=1;
				}
			}while(flag==1);
			cout<<"\nDo you want to perform more?Y/N ";
			cin>>ch;
		}
	}
	int main()
	{	
		cout<<"\nFor integer values\n";
		enter(1);
		cout<<"\nFor double values\n";
		enter(1.0);
	}
