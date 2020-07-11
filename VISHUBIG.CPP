#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{    while(1){
int n,choice,x,y,p,z,i=3,u;
clrscr();
printf("SELECT YOUR CHOICE FOLLOWING AS:\n");
printf("1=addition of two numbers\n2=check that numberis even or odd\n3=check number is prime or not\n4=printing first n prime numbers\n5=for existing from the program\n6:for finding prime numbers upto limit n\n7:find prime numbers by given limit by user\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter the value of x nad y\n");
scanf("%d%d",&x,&y);
z=x+y;
printf("sum of two numbers is%d",z);  break;

case 2:
printf("enter that number which you have to check that number is even or not\n");
scanf("%d",&x);
if(x%2==0)  {
printf("number is even");  }
else                        {
printf("number is odd");     }
break;
case 3:
printf("enter the number which you have to check that prime or not\n");
scanf("%d",&x);
for(y=2;y<=x/2;y++)
{
if(x%y==0)
{
z=12;break;
}
else
z=13;
}
if( z==12)
printf("number is non prime");
else
printf("number is prime");break;
case 4:
printf("enter the value of n at where you have to print prime numbers\n");
scanf("%d",&n);
printf("prime numbers are following as:\n");
printf("2\n");
for(x=2;x<=n; )
{
for(y=2;y<=i-1;y++)
{
if(i%y==0)
 break; }
if(y==i)
{
printf("%d\n",i);
x++;}

i++;}
 break;

case 5:exit(0);  break;
case 6:
printf("enter the value of n upto where you have to find prime numbers");
scanf("%d",&z);
printf("prime numbers are following as:\n");
printf("2\n");
for(x=2;x<=z; )
{
for(y=2;y<=i-1;y++)
{
if(i%y==0)
 break; }
if(y==i)
{ if(y<=z){
printf("%d\n",i); }
x++;}

i++;}
 break;
default:printf("choice is invalid");break;
case 7:printf("enter the value of lower limit and upper limit for prime numbers\n");
scanf("%d%d",&z,&p);
printf("prime numbers are following as\n");

for(x=1;x<=p; )
{
for(y=z;y<=z-1;y++)
{
if(z%y==0)
{break;}
}
if(y==z)
{
printf("%d\n",z);
x++;
}
z++;
}

























 }
getch();}
}



















































































































































































































































































































































