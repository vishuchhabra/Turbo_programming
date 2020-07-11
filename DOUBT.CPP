#include<stdio.h>
#include<conio.h>
void swap(int x,int y)
{
int t;                   //use of pointer in making a program of
			    //swaping
t=x;
x=y;
y=t;
printf("%d\n%d",x,y);
}
void main()
{
int a,b;
clrscr();
printf("enter the two number\n");
scanf("%d\n%d",&a,&b);
swap(a,b);
getch();
}
