#include<iostream.h>
#include<conio.h>
class vishu
{
int a,b;
public:
void getd(int x,int y)
{
a=x;
b=y;
}
void show()
{
cout<<"minus of second number from first is following as "<<endl<<a<<"+i"<<b;
}
vishu vishu ::operator -(vishu);
};
vishu vishu::operator -(vishu c)
{
 vishu temp;
 temp.a=a-c.a;
 temp.b=b-c.b;
 return(temp);
 }
void main()
{
clrscr();
vishu c1,c2,c3;
cout<<"enter the real and imaginary part of first complex number "<<endl;
int s,d;
cin>>s>>d;
cout<<"enter the real and imaginary part of second complex number "<<endl;
int f,g;
cin>>f>>g;
c1.getd(s,d);
c2.getd(f,g);
 c3=c1.operator-(c2);//instead of it we can also write directly c1-c2;

 c3.show();
 getch();
 }