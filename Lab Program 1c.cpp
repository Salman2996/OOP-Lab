#include<iostream>
using namespace std;
struct Student
{
	char name[20];
	int rollno;
	int height, weight;
	void ascending(Student *);
	void read();
	void display();
};
void Student::read()
{
	cout<<"\nEnter name: ";
	cin>>name;
	cout<<"\nEnter roll no: ";
	cin>>rollno;
	cout<<"\nEnter height: ";
	cin>>height;
	cout<<"\nEnter weight: ";
	cin>>weight;
}
void Student::display()
{
	cout<<"\nName: "<<name;
	cout<<"\nRoll No.: "<<rollno;
	cout<<"\nHeight: "<<height;
	cout<<"\nWeight: "<<weight<<"\n";
}
int main()
{
	Student s[5], temp;
	cout<<"\nEnter the student details:\n";
	for(int i=0;i<5;i++)
	{
		cout<<"\nStudent "<<(i+1)<<":";
		s[i].read();
	}
	cout<<"\nStudent Details:\n";
	for(int i=0;i<5;i++)
	{
		cout<<"\nStudent "<<(i+1)<<":";
		s[i].display();
	}
	temp.ascending(s);
}
void Student::ascending(Student s[])
{
	Student temp;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<(5-i-1);j++)
		{
			if(s[j].height>s[j+1].height)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	cout<<"\nAscending order of height:\n";
	for(int i=0;i<5;i++)
	  s[i].display();
}
