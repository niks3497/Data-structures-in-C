#include<iostream.h>
#include<conio.h>
class abc
{
private: int a,b,c;
public:
 abc()
{
cout<<"hello";
a=6;
b=4;
c=a+b;
cout<<c;
}
abc(int x)
{
if(x==0)
cout<<"true";
else
cout<<"false";
}};
void main()
{
clrscr();
abc ob1;
abc ob2(5);
getch();
}