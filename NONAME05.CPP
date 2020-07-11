#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void  main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int i,j;
setbkcolor(4);
i=getmaxcolor();
cout<<i;
setcolor(2);
cout<<"vishu chhabra is good boy"<<endl;
getch();
closegraph();
}