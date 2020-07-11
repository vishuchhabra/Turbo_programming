//program based on static member variable /clas member variable
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class account
{
int bal;
static int roi;
public:
set(int x)
{
bal=x;
}
print()
{
cout<<"value is "<<endl<<bal<<endl<<roi;
}                };
int account::roi=6; //by default its value is 0;
void main()
{  clrscr();
//int account::roi;
//int account::roi=7;
account c;
c.set(1300);
c.print();
getch();
}