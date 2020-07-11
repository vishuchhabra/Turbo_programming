#include<iostream.h>
#include<conio.h>                  // making a functon for global declaration
void sum()
{
cout<<"enter the two  numbers"<<endl;
int x,y;                                 //this part is knowm as
					    //function definition
cin>>x>>y;
int z=x+y;
cout<<"sum is following as"<<endl<<z;
}
void sum(); //this part is knowm as global declaration means every where
//we can use this function but if we di declaration in main function then '
//only main function call it
//therefore this type declaration is known as global declaration
void main()

{
clrscr();

sum();
getch();
}