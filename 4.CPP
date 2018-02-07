#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
int data;
struct node* next;
};
void addatend(struct node** q,int num);
void display(struct node* q);
void deletion(struct node** q);
void main()
{
struct node* p=NULL;
clrscr();
addatend(&p,1);
addatend(&p,2);
addatend(&p,3);
addatend(&p,4);
addatend(&p,5);
display(p);
deletion(&p);
display(p);
getch();
}

void addatend(struct node** q,int num)
{
struct node *temp, *s;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=num;
if((*q)==NULL)
(*q)=temp;
else
{
for(s=*q;s->next!=NULL;s=s->next)
s->next=temp;}
temp->next=NULL;
}

void display(struct node* p)
{
int i;
for(i=1;p!=NULL;p=p->next,i++)
printf("%d ",p->data);
}
void deletion(struct node** q)
{
struct node* s;
s=*q;
(*q)=(*q)->next;
free(s);
}
/*
1 2 3 4 5
2 3 4 5
*/
