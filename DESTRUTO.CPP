//program based on destructor
#include<iostream.h>
#include<conio.h>
class vishu
{
public:
vishu()
{
cout<<"constructor has been start"<<endl;
}
~vishu ()
{
cout<<"destructor has been end"<<endl;
}
};
void fun()
{
vishu c;
}
void main()
{
clrscr();
vishu d;

getch();
}
