//making a program using inline keyword  which iswrite in only declararion
#include<iostream.h>
#include<conio.h>
void name()
{
cout<<"my name is khan";
}
//at time of declarstion we will use inline keyword
inline void name(); //this part is known as declaration
void main()
{
 clrscr();

 cout<<"enter any number\n";
 cout<<"if number is greater then 5 it will show name";
 int x;
 cin>>x;
 if(x>5)
name();    //sometimes compiler is not making inline function so it will
	   //give warning in that case
getch();
}