#include<stdio.h>
#include<conio.h>
int size=4,top=-1,stack[4];
void push(int item)
{
if(top==size-1)
{
printf("\nTHE STACK IS FULL");
return;
}
top++;
stack[top]=item;
}

void pop()
{
if(top==-1)
{
printf("\nTHE STACK IS EMPTY");
return;
}
printf("\n%d WAS DELETED",stack[top]);
top--;
}

void display()
{
int i;
if(top==-1)
{printf("STACK IS EMPTY");
return;}
printf("\nTHE STACK IS:\n");
for(i=0;i<=top;i++)
printf("%d ",stack[i]);
}

void main()
{
int i;
clrscr();
for(i=1;i<=size;i++)
{push(i);}
display();
pop();
display();
push(5);
display();
getch();
}
/*

THE STACK IS:
1 2 3 4
4 WAS DELETED
THE STACK IS:
1 2 3
THE STACK IS:
1 2 3 5
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
