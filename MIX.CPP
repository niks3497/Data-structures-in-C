 #include<iostream.h>
 #include<conio.h>
 void main()
 {
 int fno,secno,thirdno,fono;
 fno=9;
 secno=8;
 thirdno=5;
 if(fno>secno&&fno>thirdno)
{
fono=fno&secno;
cout<<fono;
}
else if(secno>thirdno||secno>fno)
{
fno=fno+secno;
secno=fno-secno;
fno=fno-secno;
cout<<fno;
cout<<secno;
}
else
cout<<"sorry";
getch();
}


