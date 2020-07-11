#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x,y;
cout<<"enter the lower and upper limit of prime numbers respectively"<<endl;
cin>>x>>y;
cout<<"prime numbers are following as"<<endl;
int i;
for(i=x;i<=y;i++)     //program for taking lower
		     //and upper limit for prime numbers
		     //using c++language in this program

{
int p,z;
for(z=2;z<=i-1;z++)
{
if(i%z==0)

break;
}

if(z==i)


cout<<i<<endl;

}
getch();
}







