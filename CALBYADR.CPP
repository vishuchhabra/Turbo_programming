//program for using call by address for finding sum of two numbers
#include<iostream.h>
#include<conio.h>
int sum(int *p,int *q)
{
 return(*p + *q);      //funtion definton -this part

 }
 void main()
 {
int sum(int *,int *); //known as locally declaration not globally
 clrscr();
 int x,y;
 cout<<"enter the value of two numbers"<<endl;
 cin>>x>>y;
 int s=sum(&x,&y);
 cout<<"sum is "<<s;
 getch();

 }




