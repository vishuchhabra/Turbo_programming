#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void  main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(6);
setfillstyle(4,8);
fillellipse(100,100,50,25);
//circle(100,100,50);
//floodfill(100,100,4);
getch();
closegraph();
}
