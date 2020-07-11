#include<iostream.h>
#include<conio.h>
void main()
{
static int x;  //important program based on static variable
clrscr();
x+=2;
cout<<"value is follwing as"<<endl<<x;
x+=3;

cout<<"value is follwing as"<<endl<<x;
getch();
}