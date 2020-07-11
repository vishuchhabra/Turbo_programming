#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

class sqrtv
{
  int i;
  float f;             //using class making program to find square root
		       //and square of the number
  int j;
  public:
  void root()
  {
  cout<<"enter the value of number whose square root you have to find\n";
  cin>>i;
  cout<<"square root is following as\n";
  f=sqrt(i);
  cout<<f<<endl;
  }
  void square()
  {
  cout<<"enter the number whose square you have to find";
  cin>>i;
  f=i*i;
  cout<<"square of the given number is following as"<<endl<<f;
  }


  };
  void main()



  {







  while(1)
  {


  clrscr();
  sqrtv d;

  int i;
  cout<<"entee your choice for finding square root and square ofthe number\n ";
  cout<<"1:for finding sqaure root of number "<<endl<<"2:for finding sqaure of the number"<<endl;
  cout<<"3:for exiting from the program"<<endl;
  cin>>i;
  switch(i)
  {
  case 1:
 d.root();
 break;                  //important program related to
			//class and also using switch statement
			//good
  case 2:
  d.square();
  break;
  case 3:
  exit(0);
  break;
  default:cout<<"your choice is invalid";




  }
  getch();   }
   }