#include <stdio.h>
#include <conio.h>
void main()
{int m[3][3],i,j,det,row1,row2,row3;
clrscr();
for(i=0;i<3;i++)
{
printf("ENTER THE ELEMENTS OF ROW %d :\n",i+1);
for(j=0;j<3;j++)
{
scanf("%d",&m[i][j]);
}}
row1=m[0][0]*((m[1][1]*m[2][2])-(m[1][2]*m[2][1]));
row2=m[0][1]*((m[1][0]*m[2][2])-(m[1][2]*m[2][0]));
row3=m[0][2]*((m[0][1]*m[2][1])-(m[1][1]*m[2][0]));
printf("DETERMINANT IS: ");
det=row1-row2+row3;
printf("%d",det);
getch();
}
/*
ENTER THE ELEMENTS OF ROW 1 :
2
3
5
ENTER THE ELEMENTS OF ROW 2 :
5
8
3
ENTER THE ELEMENTS OF ROW 3 :
1
1
2
DETERMINANT IS: -20
*/





                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
