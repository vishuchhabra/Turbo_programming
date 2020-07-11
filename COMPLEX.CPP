#include<iostream.h>
#include<conio.h>

class complex
{
int a,b;
public:
void getd(int x,int y)
{
a=x;
b=y;
}
void display()
{
cout<<a<<"+i"<<b;
}
complex add(complex c)

{
complex temp;
temp.a=a+c.a;
temp.b=b+c.b;
return (temp);
}
};


void main()
{
clrscr();
complex c1,c2,c3;
c1.getd(2,5);
c2.getd(4,6);
c3=c1.add(c2);
c3.display();

getch();
}
