#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void  main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(2);
setcolor(4);
setfillstyle(2,5);
fillellipse(100,100,50,25);
circle(200,200,50);
floodfill(200,200,4);
getch();
closegraph();
}
