#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z,n,i;
clrscr();

printf("enter the lower limit and upper limit for printing prime numbers\n");
scanf("%d%d",&z,&n);
i=z;
printf("prime numbers are following as\n");

for(x=1;x<=n/2; ){ if(i>=z&i<=n)  {
for(y=2;y<=i-1;y++)
{
if(i%y==0)
break;}

if(y==i){
printf("%d\n",i);
x++;    }
i++;} }
getch();
}
