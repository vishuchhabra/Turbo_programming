#include<iostream.h>
#include<conio.h>
class vishu
{
protected:
int a,b;                  //simple concept based on inheritence
public:
void setd(int x,int y)
{
a=x;
b=y;
}
};
class reetu:public vishu
{
public:
void show()
{
cout<<"values is following as"<<endl<<a<<endl<<b<<endl;
}
};
void main()
{
clrscr();

class reetu v;
v.setd(4,7);
v.show();
getch();
}


