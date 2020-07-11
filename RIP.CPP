#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char a[20];
int b,c;
clrscr();
printf("enter the string which you have to reverse\n");
gets(a);
b=strlen(a);
for(c=b-1;c>=0;c--)
{
printf("%c",a[c]);}
getch();
}