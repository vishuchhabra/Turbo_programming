#include<stdio.h>
#include<conio.h>
int length(char *p)
{                             //making a function for finding length
			     //of string using pointer using user defined
			     //function
int i;
for(i=0;*(p+i)!='\0';i++);
return(i);
}
char* reverse(char *p)  //char* means retuning the adress of string
		 //for this char* is used
{
int l,i;
char c;
for(l=0;*(p+l)!='\0';l++);  //length is coming into l variable
for(i=0;i<(l/2);i++)
{                   //l/2 is because that we are starting from 0 not 1
c=*(p+i);
*(p+i)=*(p+l-1-i);  //-1 is that one is null character present
*(p+l-1-i)=c;      //p+1 will put us on null character so use -1 to
		   //come back on  last character from null character
}
return(p);} //at end we returning whole address of s by using char* which will
	   //return whole adress in which values have already changed


void main()
{
char a[112];
int i;
clrscr();
printf("enter the string whose length you have to find\n");
gets(a);
 i=length(a);
printf("length is %d\n",i);
reverse(a);
printf("%s",a);
getch();
}
