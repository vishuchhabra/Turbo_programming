#include<iostream.h>
#include<conio.h>
void isprime()                  //programto find that number is prime or not

{
int y,z;
cout<<"enter the number which you have to check";
int x;
cin>>x;
for(y=2;y<x/2;y++)
{
if(x%y==0)
{
z=34;
break;
}
else
z=35;
}
if(z==35)
cout<<"number is prime"<<endl;
else
cout<<"number is not prime";
}
void main()
{
clrscr();

isprime();
getch();
}