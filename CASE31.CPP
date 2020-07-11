//program using returns something and takes something
#include<stdio.h>
#include<conio.h>
int multi(int x,int y)
{
int c;
c=x*y;
return(c);
}
void main()
{
int a,b,d;
clrscr();
printf("enter the value of a and b\n");
scanf("%d%d",&a,&b);
d=multi(a,b);
printf("multiplication is %d\n",d);
getch();
}