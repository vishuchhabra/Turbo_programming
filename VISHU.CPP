#include<stdio.h>
#include<conio.h>
float sqrt(float a)
{
float b;                   //taking something also return something

b=a*a;
return(b);
}
void main()
{
float f,g;
clrscr();

printf("enter the value of number whose square  you have to find\n");
scanf("%f",&f);
g=sqrt(f);
printf("square is %f",g);
getch();
}