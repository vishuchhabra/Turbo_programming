//function using take something return nothing

#include<stdio.h>
#include<conio.h>
void add(int x,int y )
{
int c;
c=x+y;
printf("sum is %d\n",c);
}
void main()
{
int a,b;
clrscr();
printf("enter the value of a and b\n");
scanf("%d%d",&a,&b);
add(a,b);
getch();
}
