//program for making call by reference
#include<iostream.h>
#include<conio.h>
int sum(int &x,int &y)
{
return(x+y);
}
int sum(int &,int &);//known as globally declaration

void main()
{                    //insead of global declaration we can
		     //also use local declarstion

int p,q;
clrscr();
cout<<"enter the value of p and q"<<endl;

cin>>p>>q;
int d=sum(p,q);
cout<<"sum is following as\n"<<d;
getch();
}
