#include<stdio.h>
#include<conio.h>
void swap(int x,int y)
{
int t;
t=x;        //nothing work because only interchanging the value
//x and y does not effect the value of a and b also we dont have to print directly

x=y;
y=t;
}
void main()
{
int a,b;
printf("enter two number\n");
scanf("%d%d",&a,&b);
swap(a,b);
printf("a=%d b=%d",a,b);
getch();
}

