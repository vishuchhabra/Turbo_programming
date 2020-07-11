#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
clrscr();
printf("enter any year");
scanf("%d",&x);
if(x%4==0)
{
printf("year is leap year");
}
else
printf("year is not a leap year");
getch();
}
