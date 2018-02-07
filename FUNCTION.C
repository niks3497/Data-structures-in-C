#include<stdio.h>
int add(int a,int b)
{
return a+b;
}
int main()
{
int c;
int (*p)(int,int);
p=&add;
c=(*p)(2.3);
printf("%d",c);
}
