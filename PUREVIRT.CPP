#include<iostream.h>
#include<conio.h>
class vishu
{
public:
virtual void fun()=0;//this function is known as pure virtual function or also
//called do nothing function
void sun()
{
cout<<"my name is vishu chhabra "<<endl;
}
};
class reetu :public vishu
{
public:
void fun()
{
cout<<"my name is khan"<<endl;
}
};
void main()
{
clrscr();

reetu y;
y.fun();
y.sun();
vishu *p;
p=&y;
p->fun();
getch();
}