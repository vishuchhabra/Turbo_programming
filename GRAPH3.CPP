#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void  main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(4);
setbkcolor(5);
circle(250,250,100);
line(40,400,600,400);
rectangle(10,10,630,470);
ellipse(100,100,0,360,80,40);
fillellipse(500,100,80,40);
setbkcolor(2);
getch();

closegraph();
}