#include <stdio.h>
#include <conio.h>
void main()
{
int a[10],i,item,pos;
clrscr();
printf("ENTER THE ELEMENTS:");
for(i=0;i<=5;i++)
scanf("%d",&a[i]);
printf("ENTER THE POSITION");
scanf("%d",&pos);
for(i=pos;i<=5;i++)
{
a[i]=a[i+1];
}
for(i=0;i<=4;i++)
{
printf("%d",a[i]);
}
getch();
}
/*
ENTER THE ELEMENTS:2
3
5
4
8
0
ENTER THE POSITION4
23540
*/