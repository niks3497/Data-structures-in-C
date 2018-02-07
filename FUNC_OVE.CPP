#include<iostream.h>
#include<conio.h>
int a,b,c;
void f1();
void f2(int,int);
int f3();
int f4(int);
void main()
{
clrscr();
f1();
f2(2,3);
cout<<f3();
cout<<f4(4);
getch();
}
void f1()
{
a=2;
b=5;
c=a+b;
cout<<c;
}
void f2(int a,int b)
{
c=a&b;
cout<<c;
}
int f3()
{
a=4;
b=7;
if(a>b)
return(a);
else
return(b);
}
int f4 (int a)
{
if(a%2==0)
return(a);

}
