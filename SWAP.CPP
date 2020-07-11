#include<stdio.h>
#include<conio.h>
void main()                        //program related to swap the numbers
				   //using simple concept
{
int a,b,t;
clrscr();
printf("enter the two numbers one is a and second is b respectively\n");
scanf("%d%d",&a,&b);
t=a;
a=b;   //logic of swaping the two numbers
b=t;
printf("a is %d and b is %d",a,b);
getch();
}