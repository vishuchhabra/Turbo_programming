#include<iostream.h>
#include<conio.h>
void main()
{                  clrscr();
int a[2][2],b[2][2],c[2][2];
cout<<"enter elements of first matrix"<<endl;
for(int i=0;i<2;i++ )
for(int j=0;j<2;j++)
{
cin>>a[i][j];
}
cout<<"enter the elements of second matrix"<<endl;
for( i=0;i<2;i++ )
for( j=0;j<2;j++)
{
cin>>b[i][j];
}
for(i=0;i<2;i++)
for( j=0;j<2;j++)  {
 for(int k=0;k<2;k++)
 { int sum=0;
    sum =a[i][k]*b[k][j];
   c[i][j]=c[i][j]+sum;


 }

     }
     cout<<c[0][0];
getch();
}