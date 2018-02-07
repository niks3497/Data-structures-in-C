#include<iostream.h>
#include<conio.h>
int a,b;   //global variables
void get();     //prototype
void get1();
void set();
void main()     //main method
{
clrscr();      //clear the screen
get1();    get();      //function calling

set();

getch();       //get the character
}
void get()      //get is the name of the function
{                 //body start
cout<<"sorry"<<endl;
//int a,b;  local variable
a=15;
b=17;
cout<<"sum"<<a+b;
}
void get1()      //get is the name of the function
{                 //body start
cout<<"welcome"<<endl;
//int a,b;
a=50;
b=7;
cout<<"add"<<a+b;
}
void set()
{
if(a>b)
cout<<"a is grater";
else
cout<<"b is greater";
}