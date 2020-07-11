#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,x;
clrscr();
while(i<5)
{
printf("enter any number");
scanf("%d",&x);
if(x>0)
 {
break;
     }
i++;
}
i==5?printf("end normally"):printf("break apply");
getch();
}