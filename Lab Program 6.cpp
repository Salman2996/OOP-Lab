#include<iostream>
#include<string.h>
using namespace std;
class String
{
	char *str;
	int len;
	public:
		String(){}
		String(char *s)
		{
			len=strlen(s);
			str=new char[len+1];
			strcpy(str,s);
		}
		String(String &s)
		{
			len=s.len;
			str=new char[len+1];
			strcpy(str, s.str);
		}
		String operator+(String s)
		{
			String temp;
			int len1=len;
			int len2=s.len;
			temp.str=new char[len1+len2+2];
			strcpy(temp.str,str);
			strcat(temp.str, " ");
			strcat(temp.str, s.str);
			return temp;
	    }
		friend ostream& operator<<(ostream&, String&);
};
ostream& operator<<(ostream& out, String& s)
{
	out<<"\nString is: "<<s.str;
	return out;
}
int main()
{
	String s1("ISE");
	String s2("MSRIT");
	String t1=s1;
	String t2=s2;
	String t3;
	t3=s1+s2;
	cout<<t1<<t2<<t3;
}
