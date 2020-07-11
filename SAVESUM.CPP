#include<iostream.h>
#include<conio.h>
int scan()
{
cout<<"enter the two numbers\n";
int x,y;
cin>>x>>y;
return(x+y);              //scanning part in the program
}
void print()
{     int z;
z=scan();
      //printing part in this program
cout<<"sum is following as\n"<<endl<<z;
}
void main()
{            clrscr();
print();
getch();

}
