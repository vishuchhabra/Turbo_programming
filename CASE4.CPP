//return something and also take something
#include<stdio.h>
#include<conio.h>
int add(int x,int y)
{ int c;

c=x+y;
return(c);
}
void main()
{
int a,b,d;
clrscr();
printf("enter the value of a and b\n");
scanf("%d%d",&a,&b);
d=add(a,b);
printf("sum is%d",d);
getch();
     }