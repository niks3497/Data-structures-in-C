#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
int data;
struct node *next;
}*front=NULL,*rear=NULL;

void add(int item)
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
temp->data=item;
if(front==NULL)
{
front=temp;
rear=temp;
temp->next=NULL;
return;
}
temp->next=NULL;
rear->next=temp;
rear=temp;
}

void deletion()
{
struct node *temp=front;
printf("\n");
printf("%d was deleted",temp->data);
front=front->next;
free(temp);
}
void display()
{
struct node *temp=front;
printf("\n");
printf("QUEUE IS:\n");
while(temp->next!=NULL)
{
printf("%d ",temp->data);
temp=temp->next;
}
printf("%d",temp->data);
}
void main()
{
int i;
clrscr();
for(i=1;i<=5;i++)
{
add(i);
}
display();
deletion();
display();
add(15);
display();
getch();
}
/*
QUEUE IS:
1 2 3 4 5
1 was deleted
QUEUE IS:
2 3 4 5
QUEUE IS:
2 3 4 5 15
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

