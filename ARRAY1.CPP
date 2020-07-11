//find the average of ten numbers using array in program
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,sum=0;
float average;
clrscr();
printf("ENTER THE TEN NUMBERS WHOSE AVERAGE YOU HAVE TO FIND\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
sum=sum+a[i];
}
average=sum/10.0; //here we using 10.0 beacause divide oftwo int is int
printf("average is %f",average);   //therefore we using 10.0 whichis of float
getch();

}