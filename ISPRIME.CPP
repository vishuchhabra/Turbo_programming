#include<stdio.h>
#include<conio.h>
void main()            //checking that number is prime or not
{
int a,y,z;
clrscr();
printf("enter the value of number which you have to check\n");
scanf("%d",&a);
for(y=2;y<a;y++)
{
if(a%y==0){
z=45;  break;}

else

z=46;}  printf("result is following as\n");

if(z==45)
printf("number is not prime");
else
printf("number is  prime");
getch();
}
