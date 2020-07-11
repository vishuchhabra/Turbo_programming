#include<stdio.h>
#include<conio.h>
void main()
{                                 //program based on simple pointer problems
int x;
clrscr();                        //in this we are using two symbol
//one is & for finding adress for any number and second for number
//from adress which symbol is *
//&x will find adress of the number and *&x will return number again
//in our program
printf("enter the number\n");
scanf("%d",&x);
printf("number is %d",x);
printf("\n address of number is following as\n");
printf("%u",&x);
printf("\nagain number from address is also following as\n");
printf("%d",*&x);
getch();}