#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z;   clrscr();

printf("enter any three numbers\n");
scanf("%d%d%d",&x,&y,&z);
if(x>=y&&x>=z)
{
printf("%d is biggest than all\n",x);
}
if(y>=x&&y>=z)
{          if(x==y&&y==z)
{
printf(" ");
}
else
printf("%d is biggest then all\n",y);
}
if(z>=x&&z>=y)
{if(x=y&&y==z)
{
printf(" ");
}
else
printf("%d is biggest then all\n",z);
}
getch();
}


