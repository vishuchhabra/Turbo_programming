#include<iostream.h>
#include<conio.h>
class vishu        //concept based on  private public,and protected
{
public://private://protected:
int a,b;
public:
void setd(int x,int y)
{
a=x;
b=y;
}
};
class reetu :public vishu
{
public:
 void show()
 {
 cout<<"values is following as"<<endl<<a<<endl<<b;
 }
 };
 void main()
 {
 clrscr();
 cout<<"enter the two number "<<endl;
 int c,v;
 cin>>c>>v;
 reetu k;
 k.setd(c,v);
 k.show();
 getch();
 }