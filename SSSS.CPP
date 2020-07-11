#include<iostream.h>
#include<stdio.h>
#include<conio.h>
struct book
{
 private:
 int id;
 char title[20];
 float price;
 public:
 void input()           //somewhat typical progrsam based on structure
			//important program
 {
 cout<<"enter the of id ,title and price"<<endl;
 cin>>id>>title>>price;
 }
 void display()
 {
 cout<<"values are following as\n";
 cout<<id<<endl<<title<<endl<<price<<endl;
 }
 };
 void main()
 {
 book b1;
 book b2;

 clrscr();
 b1.input();
 b1.display();
// b2.id=24;   it will give  error when we are using private
	     //basicaaly it is for corroupt of data
 getch();
 }