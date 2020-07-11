#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],b[20],c[20];
clrscr();
printf("enter the first string\n"); //target
gets(a);
printf("enter the second string\n");      //source
gets(b);
strcat(a,b);
printf("%s",a); //it will assign  target to combination of both target and source

getch();
}