//takes nothing returns something

#include<stdio.h>
#include<conio.h>
int add()
{
int x,y,z;
printf("enter the value of x and y\n");
scanf("%d%d",&x,&y);
z=x+y;
return(z);
}
void main()
{
int c;
clrscr();
c=add();
printf("sum is %d",c);
getch();
}