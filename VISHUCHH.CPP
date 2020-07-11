#include<iostream.h>
#include<conio.h>
class vishu
{
public:
~vishu()
{
cout<<"my name is khan"<<endl;
}
};
class reetu:public vishu
{
public:
~reetu()
{
cout<<"my name is vishu chhabra"<<endl;
}
};
void main()
{
clrscr();
reetu t;
getch();
}
