#include<stdio.h>
#include<conio.h>
void main()
{
int i,x;
clrscr();
for(i=1;i<5;i++)
{
printf("e any n");
scanf("%d",&x);
if(x>0)                                  //using for loop

{
break;
}
}
i==5?printf("normally"):printf("break");
getch();
}