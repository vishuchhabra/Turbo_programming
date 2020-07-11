#include<stdio.h>
#include<conio.h>
void main()         {      //program using switch statement

int x,y,z;
clrscr();
printf("enter any number");   //also using break sttemnet
scanf("%d",&x);
switch(y=x+1)
{
case 1:z=y+1;//break;
case 2:z=y+2;//break;       //if we dont use break then all will executr


default:z=y+3;//break;
}
printf("net value is %d",z);
getch();
}