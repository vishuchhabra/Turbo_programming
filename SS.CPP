#include<iostream.h>     //important progrsm on based on structure
#include<conio.h>
#include<string.h>
#include<stdio.h>

struct book
{
 int id;         //structure part in which structure is defined
 char title[20];
 float price;
 };

book input()      //very simple program based on structure

{
 book b;   //input name function which will take value from user
 cout<<"enter the value of id,title and price"<<endl;
 cin>>b.id;
 gets(b.title);
 cin>>b.price;
 return(b);
 }
 void  display()
 {
 book b2;
 b2=input();
   cout<<"values are following as"<<endl;
   cout<<b2.id<<endl<<b2.title<<endl<<b2.price;
   }
void main()
 {
  clrscr();




  display();
  getch();
  }


