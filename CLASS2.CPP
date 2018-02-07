#include<iostream.h>
#include<conio.h>
class abc
{
private:
	int a,b,c;
public:
	void get()
	{
	cout<<"hello";
	}
	void set()
	{
	cout<<"good";
	a=9;
	b=6;
	c=a+b;
	cout<<"sum="<<c;
	}
};
class def
{
private:
	int a;
public:
	void gett(int x)
	{
	a=x;
	cout<<a;
	}
};
void main()
{
clrscr();

abc ob1;
ob1.get();

abc ob2;
ob2.set();

def d1;
d1.gett(5);


getch();
}