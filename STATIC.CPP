#include<stdio.h>
#include<iostream.h>
#include<conio.h>
void main()
{
static int c;  //important program based on static variable in c
int a;      //by default the value of ststic c is default 0
clrscr();
a=5;
cout<<"value of a and c is following as"<<endl<<a<<endl<<c;
c+=3;
cout<<endl<<"next value is following as "<<c<<endl;

getch();
}
