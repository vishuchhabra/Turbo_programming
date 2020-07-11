#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[20];
clrscr();
printf("enter your name\n");
gets(s);
strrev(s);

printf("reverse of your name is\n");
puts(s);
getch();
}
