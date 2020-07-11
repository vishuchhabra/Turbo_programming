#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[24];
int l;
clrscr();
printf("enter the string for which you have to find length\n");
gets(a);
l=strlen(a);
printf("length is %d",l);
getch();
}