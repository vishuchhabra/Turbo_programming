  //example based on pointer
  #include<stdio.h>
  #include<conio.h>
  void main()                           //important program related to
  //pointer concept

  {
  int x,*j;
  clrscr();
  printf("enter any number\n");
  scanf("%d",&x);
  j=&x;
  printf("%d\t%u\n",x,j);
  printf("%d\t%u\n",*j,&x);     //output will x and &x
			    //x and &x
			    //&x
  printf("%u",*&j);
  getch();   }

