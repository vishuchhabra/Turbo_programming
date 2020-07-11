#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x,y;
cout<<"give agian and again values of the x and y twice a time"<<endl;
cin>>x>>y;
cin>>x>>y;     //these values will overlap the  values of first time values
	       //of x and y
cout<<"values are following as "<<endl<<"x="<<x<<endl<<"y="<<y;
getch();
}
