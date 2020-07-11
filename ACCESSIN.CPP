#include<iostream.h>
#include<conio.h>
class account
{ int i;
public:
static int roi;         //without object how we can acsess the ststic variable
	  //but when roi is private and no object is present then for

}   ;      //accessing we will use for accessing in main
	      // account::setroi(3.5)and we have to use ststic key in
	      //front of static functionie static void setroi(float r)
int account::roi  ;

void main()
{  account j;
clrscr();
     //method of acessing variable without usong object
cout<<account::roi;
   cout<<endl<<"accessing through object"<<endl<<j.roi;
getch();
}
