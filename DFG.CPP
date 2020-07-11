

#include<iostream.h>
#include<conio.h>
class vishu
{
public:
vishu()
{
cout<<"my name is khan"<<endl;
}
};
class reetu:public vishu
{
public:
reetu():vishu ()
//at here contructor is child class call first but execution start first
//constructor of parent class also constructor of parent class is generally
//called by constructor of child class

{
cout<<"my name is vishu chhabra"<<endl;

}
};
void main()
{
clrscr();

reetu d;
  vishu f;
getch();
}