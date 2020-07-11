#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()              //multiple string function
{
char a[3][16];
int i;
clrscr();
printf("enter the strings which you have to  print\n");
for(i=0;i<=2;i++)
{
gets(a[i]) ;}
for(i=0;i<=2;i++)
{
puts(a[i]);} //instead of &a[i][0] we can also use s[i]
getch();               //in single dimension string we use &s[0]=s
}