#include<stdio.h>
#include<iostream.h>
#include<conio.h>
class complex
{
private:                  //simple program based on complex number
int a,b;               //in structure by default all are public
public:		     //but in class by default all are private
void scan(int x,int y)
{
a=x;
b=y;
}

void print()
{
cout<<"your complex number is following as"<<endl;
cout<<a<<"+"<<b<<"i"<<endl;
}
};
void main()
{
complex j;
int x1,x2;
clrscr();
 cout<<"enter the value of real and imaginary part of compex number respectively "<<endl;
 cin>>x1>>x2;
j.scan(x1,x2);
j.print();
getch();
}