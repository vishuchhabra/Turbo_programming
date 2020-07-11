


#include<iostream.h>
#include<conio.h>
void main()
{

clrscr();			  //program using a reference variable
int x;
cout<<"enter the value of x\n";
cin>>x;
int &y=x; //concept of reference variable is coming at  here
x+=2;
y++;
cout<<"value by using reference vaiable is following as"<<endl<<x<<endl<<y;
getch();
}


