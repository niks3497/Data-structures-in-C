//NIKHIL KALRA
//022
//EXP-1(B)
#include<stdio.h>
#include<conio.h>

void main()
{
int a[5],i,item;
clrscr();
printf("ENTER THE ELEMENTS: ");
for(i=0;i<5;i++)
scanf("%d",&a[i]);

printf("ENTER THE ITRM TO BE SEARCHED=");
scanf("%d",&item);
for(i=0;i<5;i++)
{if(a[i]==item)
{printf("ITEM FOUND AT POSITION=%d",i);
break;}}
getch();
}

/*OUTPUT
ENTER THE ELEMENTS: 4
6
7
9
2
ENTER THE ITRM TO BE SEARCHED=9
ITEM FOUND AT POSITION=3
*/





                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
