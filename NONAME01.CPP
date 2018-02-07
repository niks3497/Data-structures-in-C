#include <stdio.h>
#include <conio.h>
void main()
{ int a,b,c,n,i=0;    a=0;b=1;
printf("enter the number of terms: ");
scanf("%d",&n);
while(i<n)
{c=a;
printf("%d\t",a);
a=a+b;
b=c;i++;
}getch();
}