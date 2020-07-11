
#include<iostream.h>
#include<conio.h>
#include<string.h>

struct book              //simple program based on structure
			 //very first program
{
  int id;
  char title[20];
  float price;
  };
void main()
{
  book b1;
  clrscr();
  b1.id=12;
  strcpy(b1.title,"vishu chhabra");
  b1.price=300.0;
  cout<<b1.id<<endl<<b1.title<<endl<<b1.price;
  getch();
  }