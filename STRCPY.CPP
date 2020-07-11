#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()             //program using function strcpy for coping another string

{
char a[20],b[20];
clrscr();
printf("enter the string which you have to copy\n");
gets(a);
strcpy(b,a);
printf("copy string is %s",b);
getch();
}