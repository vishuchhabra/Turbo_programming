  #include<stdio.h>
  #include<conio.h>
  void main()
  {
  int x,y,z;
  clrscr();
  printf("enter any number\n");
  scanf("%d",&x);
  for(y=2;y<x;y++)
  {
  if(x%y==0)
 { z=3;
  break;}
  else
  z=5; }
  if(z==3)
  printf("number is non prime");
  else
  printf("number is prime");

  getch();
  }

