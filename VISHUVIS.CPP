#include<stdio.h>
#include<conio.h>
void main()
{
int y,x,flag=0;
clrscr();
printf("enter any number");
scanf("%d",&x);
for(y=2;y<x;y++)
{
	if(x%y==0)
	{
	flag=1;
	break;
	}
}
if(flag==0)
printf("Number is prime");
else
printf("Number is not prime");
getch();
}
