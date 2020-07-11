//making copy constructor
#include<iostream.h>
#include<conio.h>
class vishu
{
public:
int a,b;
vishu (int x,int y)
{
a=x;
b=y;
cout<<"values of a and b are following as "<<endl<<a<<" "<<b;
}
vishu (int z)
{
a=z;
b=0;
cout<<endl<<"values of second construcctor are following as "<<endl<<a<<" "<<b;
}
vishu()
{ //default constructor
}
vishu (vishu &c)
{            //it we directly write c then recursion will come
a=c.a;     //making copy constructor
b=c.b;    //but if we dont make then compiler will make automatic
}
};

void main()
{
clrscr();

vishu c1(3,4),c2(5),c3;
vishu c4(c1);//c4=c1;
cout<<endl<<"values of copy constructor are following as "<<endl<<c4.a<<" "<<c4.b;

 getch();
 }