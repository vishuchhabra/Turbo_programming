#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct book
{
 int id;
 char title[25];             //simple program based on structure
			     //very simple
 float price;
 };
 void main()
 {
 clrscr();
 book b1;
 cout<<"enter the value of id ,title and price respectively"<<endl;
 cin>>b1.id;
 gets(b1.title);
 cin>>b1.price;
 book b2=b1;
 cout<<"values are following as"<<endl;
 cout<<b1.id<<endl<<b1.title<<endl<<b1.price<<endl;
 cout<<"values of next variable are following as"<<endl;
 cout<<b2.id<<endl<<b2.title<<endl<<b2.price<<endl;
 getch();
 }
