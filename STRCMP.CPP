#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
	{   //program using function strcmp
char a[20],b[20];
int c;
clrscr();
printf("enter thr first string\n");
gets(a);                                            //if it return non zero
						    //strings are not equal
						    //if 0 then strings are equal
printf("enter the second string\n");
gets(b);
c=strcmp(a,b);
printf("answer is %d",c);
getch();
}
