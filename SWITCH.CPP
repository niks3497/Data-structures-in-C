#include<iostream.h>
#include<conio.h>
void main()
{
int fno,secno,thirdno;
fno=10;
secno=15;
thirdno=1;
switch(thirdno)
{
case1:
cout<<fno+secno;
cout<<fno-secno;
cout<<fno*secno;
break;
case2:
cout<<fno>secno;
cout<<fno<secno;
break;
default:
cout<<"sorry";
getch();
}