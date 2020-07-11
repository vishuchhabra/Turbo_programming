#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y)
{
int t;
t=*x;                             //swaping of number using pointer
	   //at here we making indirectly
		  //t=a,a=b,b=t                       //concept
*x=*y;
*y=t;}
void main()
{
int a,b;
clrscr();
printf("enter the value of a and b respectively\n");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("a=%d b=%d",a,b);
getch();
}



