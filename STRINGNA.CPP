#include<stdio.h>
#include<conio.h>
void main()
{
char s[20];                       //scanf can store space so it will not printf whole name like vishu chhabra

clrscr();
printf("enter your name\n");
scanf("%s",s) ; //instead of s we can also write &s[0]
printf("your name is %s ",s);//we can say that s=&s[0]
getch();
}