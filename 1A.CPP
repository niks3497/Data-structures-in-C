//NIKHIL KALRA
//022
//EXP-1(A)Binary Search
#include<stdio.h>
#include<conio.h>
void main()
{
int first=0,last=4,mid,a[5],item,i;
clrscr();
printf("ENTER THE ELEMENTS: ");

for(i=0;i<5;i++)
scanf("%d",&a[i]);

printf("ENTER THE NUMBER TO BE SEARCHED");
scanf("%d",&item);

while(first<=last)
{
mid=(first+last)/2;
if(a[mid]==item)
{
printf("ITEM FOUND AT POSITION %d",mid);
break;
}
else if(a[mid]>item)
last=mid-1;
else first=mid+1;

mid=(first+last)/2;
}
if(last<first)
printf("ITEM CANNOT BE FOUND");
getch();
}

/*
ENTER THE ELEMENTS: 2
5
7
9
6
ENTER THE NUMBER TO BE SEARCHED7
ITEM FOUND AT POSITION 2
/*

//1(B)Linear Search
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
/*
ENTER THE ELEMENTS: 4
6
7
9
2
ENTER THE ITRM TO BE SEARCHED=9
ITEM FOUND AT POSITION=3 
*/






                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                



