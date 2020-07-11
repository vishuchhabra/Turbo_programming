#include<stdio.h>
#include<conio.h>
void main()
{                                               //use of assignment operator

int x,y;  clrscr();                      /*  in this we using assignment workwithout
taking any  third variable directly in printf)*/

printf("enter any two numbers");
scanf("%d%d",&x,&y);
printf("maximun value is %d",x>y?x:y);
getch();
}
