#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void  main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int i,j;
i=getmaxcolor();
setbkcolor(15);
int x=100;
int y=10;
for(j=0;j<=i;j++)
{
setcolor(j);
outtextxy(x,y,"vianayak singla");
y+=20;
}
getch();
closegraph();
}