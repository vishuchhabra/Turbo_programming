#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class vishu           //important program related to class concept
{

int id;              //important program related the concept of class
char title[20];
float price;
	public:
void scan();       //this is another method of making  function as member
void print();      //of class but in this they are not inline so we have to
		   //write inline function in the declaration but in class
		   //function are inbuilt inline
};
void vishu::scan()
{
cout<<"enter the values of id ,title and price also\n";
cin>>id;      //scanning part in the class
gets(title);
cin>>price;
}
void vishu::print()
{
scan();
cout<<"print of your given values are following as\n";
cout<<id<<endl<<title<<endl<<price<<endl;
}

void main()
{
clrscr();

vishu d;


d.print();
getch();
}
