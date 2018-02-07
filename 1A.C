#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],item;
clrscr();
printf("ENTER 5 ELEMENTS");
for(int i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("\n ENTER THE ELEMENT TO BE SEARCHED \n");
scanf("%d",&item);
for(int j=0;j<5;j++)
{
if(a[j]==item)
{
printf("THE ITEM TO BE SEARCHED IS AT : %d",j+1);
break;
}}
getch();
}
