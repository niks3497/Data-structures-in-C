#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *next;
}
*head=NULL;
int s=0;
void add(int item)
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
if(head==NULL)
{
temp->info=item;
head=temp;
temp->next=head;
s++;
return;
}
temp->info=item;
temp->next=head->next;
head->next=temp;
s++;
}
void addatend(int item)
{
struct node* temp;
temp=(struct node *)malloc(sizeof(struct node));
if(head==NULL)
{add(item);
return;
}
temp->info=item;
temp->next=head->next;
head->next=temp;
head=temp;
s++;
}
void deletion(int item)
{
struct node *c=head,*pre;
if(head==NULL)
{
printf("UNDERFLOW");
}
while(c->info!=item)
{
if(c->next==head)
{printf("/n");
printf("NODE NOT FOUND");
break;}
pre=c;
c=c->next;
}
if(c->next==head)
{
head=NULL;
free(c);
return;
}
if(c==head)
{
pre=head;
while(pre->next!=head)
{
pre=pre->next;
}
head=c->next;
pre->next=head;
free(c);
}
else
if(c->next==head)
{
pre->next=head;
free(c);
}
else
{
pre->next=c->next;
free(c);
}
s--;
}
void display()
{
struct node *temp=head->next;
printf("\n\n");
do{
printf("%d ",temp->info);
temp=temp->next;
}
while(temp!=head->next);
}
void main()
{
int i;
clrscr();
for(i=1;i<=5;i++)
{
add(i);}
display();
addatend(7);
display();
add(8);
display();
addatend(9);
display();
deletion(4);
display();
printf("\n");
printf("SIZE IS:%d",--s);
getch();
}
/*
5 4 3 2 1

5 4 3 2 1 7

8 5 4 3 2 1 7

8 5 4 3 2 1 7 9

8 5 3 2 1 7 9
SIZE IS:6
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                



