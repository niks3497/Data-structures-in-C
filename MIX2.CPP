#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c,d;
a=4;
b=6;
c=9;
clrscr();
if(a>b&&a>c)
{
cout<<(a+b);
}
else if(b>a&&b>c)
{
d=b&c;
cout<<(d);
}
else if(c>a||c>b)
{
for(a=1;a<=4;a++)
{
if(a==3)
{
cout<<(a=a+4);
break;
}
}
}
else
cout<<"sorry";
getch();
}