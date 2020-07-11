#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{           clrscr();

int gd=DETECT,gm;
initgraph(&gd,&gm,"c://turboc3//bgi");

setbkcolor(7);
outtext("HH");
getch();
cleardevice() ;
closegraph();
}