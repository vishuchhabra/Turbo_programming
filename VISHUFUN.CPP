#include<stdio.h>
#include<conio.h>
   add()
{
int x,y,z;
printf("enter two numbers\n");
scanf("%d%d",&x,&y);
z=x+y;
printf("sum is %d",z);
}


void main()  {
clrscr();
add();
getch();
}
