#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
int data;
struct node* next;
};
struct node* head;
void insert(int x)
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->next=head;
head=temp;
}
void print()
{
struct node* temp=head;
printf("list is: ");
while(temp->next!=NULL)
{
printf(" %d",temp->data);
temp=temp->next;
}
printf("\n");
}

void main()
{
head=NULL;
printf("how many numbers?\n");
int n,i,x;
for(i=0;i<n;i++)
{
printf("enter the number\n");
scanf("%d",&x);
insert(x);
print();
}
}
