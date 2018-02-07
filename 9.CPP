#include<stdio.h>
#include<conio.h>
void main()
{
int arr[5],i,j,temp;
clrscr();
printf("ENTER THE ELEMENTS:\n");
for(i=0;i<5;i++)
scanf("%d",&arr[i]);
for(i=0;i<4;i++)
{
for(j=0;j<4-i;j++)
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}}
printf("AFTER SORTING:\n");
for(i=0;i<5;i++)
printf("%d ",arr[i]);
getch();
}
/*
ENTER THE ELEMENTS:
3                                                                               
88                                                                              
56                                                                              
23                                                                              
100                                                                             
AFTER SORTING:                                                                  
3 23 56 88 100                                                                  
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
