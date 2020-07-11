#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
clrscr();
printf("ENTER THE NUMBER\n");
scanf("%d",&x);
for(y=2;y<x;y++)
   {
    if(x%y==0)
     {
      x=56;
      break;}
      }

if(x==56)
printf("number is non prime");
else
printf("number is prime");
getch();
}