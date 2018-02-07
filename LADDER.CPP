#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int fno,secno,thirdno,fono;
fno=5,secno=7,thirdno=4,fono=8;
if((fno>secno)&&(fno>thirdno))
{
cout<<fno+secno;
cout<<fno+thirdno;
}
else if((secno>fno)&&(secno>fono))
{
cout<<(secno>=fno);
cout<<(secno>=fono);
}
else if((thirdno>secno)&&(thirdno>fno))
{
cout<<thirdno-secno;
cout<<thirdno-fno;
}
else
cout<<"sorry";
}