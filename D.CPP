#include<iostream.h>
#include<conio.h>           //we have to make following patern
			    //*

void main()                 //**
{
clrscr();                     //***   instread of star we can use any symbol,
char a[3][3];
a[0][1]=0;
a[0][2]=0;
a[1][2]=0;
cout<<"enter the any six same symbol whose pattern you have to make"<<endl;
cin>>a[0][0];
a[1][0]=a[0][0];
a[1][1]=a[1][0];
a[2][0]=a[1][1];
a[2][1]=a[2][0];        //scanning part in program
a[2][2]=a[2][1];


  cout<<"your required pattern is folowing as"<<endl;
 for(int x1=0;x1<3;x1++)
 {
 for(int x3=0;x3<3;x3++)    //printing part
{
 cout<<a[x1][x3]<<" ";
 }
 cout<<endl;
 }
 getch();
	}