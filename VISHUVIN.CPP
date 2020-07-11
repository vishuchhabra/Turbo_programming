  #include<stdio.h>
  #include<conio.h>
  #include<stdlib.h>
  void main()
  {
  int x,y,z,choice;
  while(1)
  {
  clrscr();                       //using switch statement in c language
  printf("enter your choice");
printf("\n1.for addition\n2.for odd even\n3.for printing first n natural number\n4.exit");

scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter any two numbers");
scanf("%d%d",&x,&y);
z=x+y;
printf("sum is %d",z);
		  break;
case 2:
printf("enter any number");
scanf("%d",&x);
y=x%2;
if(y==0)
printf("number is even");
else
printf("number is odd");
		 break;
case 3:
printf("ente value of n for numbers");
scanf("%d",&x);
printf("value are following as\n");
for(z=1;z<=x;z++)
{
printf("\n%d",z);
}
		break;
		case 4:exit(0);
default :printf("choice is invalid");}

getch(); }
}