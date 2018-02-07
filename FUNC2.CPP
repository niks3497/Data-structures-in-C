#include<iostream.h>
#include<conio.h>
int a,b,c;
void f1();
void f2();
void f3();
int f4();
void main()
{
clrscr();
f1();
f2();
f3();
cout<<f4();
getch();
}
void f1()
{
a=4;
b=3;
c=a+b;
cout<<c;
}
void f2()
{
a=6;
b=4;
c=a&b;
cout<<c;
}
void f3()
{
a=7;
b=5;
c=(a>b)?a:b;
cout<<c;
}
int f4()
{
a=7;
b=4;
if(a<b)
return(a);
else
return(b);
}



