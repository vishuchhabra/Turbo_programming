#include<stdio.h>         //if we want write member function outside the
			  //class then we have to make two changes in the
#include<iostream.h>       //in the program 1.declaratrion should
#include<conio.h>         //be present in class

class complex
{
private:
int a,b;
public:
void scan(int,int);
void print();};		     //but in class by default all are private
void complex::scan(int x,int y)
{
a=x;
b=y;
}

void complex::print()  //2nd is this one in which member ship tage is used
{
cout<<"your complex number is following as"<<endl;
cout<<a<<"+"<<b<<"i"<<endl;
}

void main()
{
complex j;
int x1,x2;
clrscr();
 cout<<"enter the value of real and imaginary part of compex number respectively "<<endl;
 cin>>x1>>x2;
j.scan(x1,x2);
j.print();
getch();     }
