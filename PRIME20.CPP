#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z,a=3;
clrscr();
printf("prime numbers are following as\n");
printf("2\n");
for(x=2;x<=20; )
{
for(y=2;y<=a-1;y++)
{
if(a%y==0)
break;}
if(y==a)
{
printf("%d\n",a);
x++;
}
a++;}
getch();
}
