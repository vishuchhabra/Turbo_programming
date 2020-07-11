#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x,y,p=1;
cout<<"enter the number whose factorial you have to calculate"<<endl;
cin>>x;
for(y=x;y>=1;y--)
{
   p=p*y;

  }
  cout<<"value of factorial is following as"<<endl<<p;
  getch();
  }

