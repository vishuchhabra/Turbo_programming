#include<iostream.h>
#include<conio.h>
void main()
{
int e;
int *const p=&e;
e=781;
cout<<"value is following as "<<*p<<endl;
getch();
}