#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20];
clrscr();
//same program we can make for function strupr
printf("enter the string on which you have to apply strlow function\n");
gets(a);
strlwr(a);
printf("lowercase string is %s ",a);
getch();
}