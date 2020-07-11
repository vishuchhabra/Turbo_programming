#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2],b[2][2],c[2][2],i,j,k,sum=0;
clrscr();
printf("enter the elements of array a\n");
for(i=0;i<2;i++)
		     {
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
} printf("\n");}
printf("enter the value of array b\n");
for(i=0;i<2;i++)
		  {
for(j=0;j<2;j++)   {

scanf("%d",&b[i][j]);}printf("\n");}
printf("multiplication is downward\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
for(k=0;k<2;k++)
{
sum=sum+a[i][k]*b[k][j]; }
c[i][j]=sum;

sum=0;
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++){
printf("%d\t",c[i][j]);
}
printf("\n");  }
getch();
}
