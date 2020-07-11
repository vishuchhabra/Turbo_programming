#include<stdio.h>
#include<conio.h>
void main()
{
int x=4;
clrscr();
x=x++ ;  //post increment

printf("%d \n",x);
x=++x;//pre incremet
printf("%d",x);

getch();
}

