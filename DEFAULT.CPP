//program related to default arrgument
#include<iostream.h>
#include<conio.h>
int sum(int x,int y,int z)
{
return(x+y+z);         //definition part in function
}
int sum(int,int,int=0);//in declaration part we are passing one default arrgu.
void main()
{
clrscr();

int x,y,z;
 cout<<"enter the two numbers"<<endl;
 cin>>x>>y;
 z=sum(x,y);
 cout<<"sum is"<<endl<<z<<endl;
 cout<<"enter the three numbers"<<endl;
 cin>>x>>y>>z;
 int p=sum(x,y,z);
 cout<<"sum is "<<endl<<p;
 getch();
 }
