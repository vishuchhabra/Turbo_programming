#include<stdio.h>
#include<conio.h>        \\program based on scanning numbers from array
//using pointer and printing  these numbers also using pointer

void input(int *p)
{
int i;
printf("enter the five numbes which you have to scan\n");
for(i=0;i<5;i++)
		      //mix program using pointer in which both
		      //dispay and sort etc function are present
scanf("%d",p+i)  ;
}

void display(int *p) {
int i;
printf("displanation of scanned numbers are following as\n");
for(i=0;i<5;i++)

printf("%d\n",*(p+i));
}
void sort(int *p)
{
int round,t,i;
for(round=1;round<5;round++)

for(i=0;i<4;i++)
{                      //important thing for shorting five numbers
//total number of round are always less than total numbers ie 4
if(*(p+i)>*(p+i+1))     //but it is maximum case shorting may be done in less
//number of rounds
{
t=*(p+i);
*(p+i)=*(p+i+1);
*(p+i+1)=t;
}}

printf("sorting numbers are following as\n");
}



void main()
{
int a[5];
clrscr();
input(a);
display(a);
sort(a);
display(a);

getch();
}
