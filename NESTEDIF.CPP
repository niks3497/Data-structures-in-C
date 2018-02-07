#include<iostream.h>
#include<conio.h>
void main()
{
int fno,secno,thirdno;
fno=40;
secno=20;
thirdno=30;
if(fno>secno)
{
if(fno>thirdno)
{
cout<<"fno+secno="<<fno+secno;
cout<<fno+thirdno;
}
else
{
cout<<(fno>=secno);
cout<<(fno>=thirdno);
}
}
else
{
if(secno>thirdno)
{
cout<<(secno>thirdno&&secno>fno);
}
else
cout<<"ans is correct";
}
}