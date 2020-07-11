#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z;
clrscr();

printf("enter any two numbers");
scanf("%d%d",&x,&y);
z=x>y?x:y;
printf("greatest value is%d",z);
getch();
}