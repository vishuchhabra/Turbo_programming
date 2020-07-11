//example of function take nothing and return nothing


#include<stdio.h>
#include<conio.h>
void add()
{
int x,y,z;
printf("ENTER THE VALUE OF X AND Y\n");
scanf("%d%d",&x,&y);
z=x+y;
printf("sum is %d\n",z);
}
void main() {
clrscr();
add();
getch();
}