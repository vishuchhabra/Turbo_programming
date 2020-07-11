//use of ststic member in c++ programing
#include<iostream.h>
#include<conio.h>
void show()
{
static int c=0;
cout<<endl<< c++<<" "<<endl;
}
void display()
{
int d=0;

cout<<endl<<d++<<" "<<endl;
}
void main()
{
clrscr();
cout<<"values for static variable are following as "<<endl;
for(int m=0;m<5;m++)
{
show();}
cout<<"values for simple variable are following as"<<endl;
for(int s=0;s<5;s++)
{
display();
}
getch();
}