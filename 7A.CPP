#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[9][3],i,j,z=0;
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
if(a[i][j]!=0)
{
b[z][0]=i;
b[z][1]=j;
b[z][2]=a[i][j];
z++;
}}}
printf("\nTHE SPARSE MATRIX IS:\n");
for(i=0;i<z;i++)
{for(j=0;j<3;j++)
{printf("%d",b[i][j]);
}printf("\n");
}
getch();
}
/*
3
6
9
2
5
0
8
0
0

THE SPARSE MATRIX IS:
003
016
029
102
115
208
*/





                                                                                
