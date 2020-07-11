#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\Turboc3\\bgi");
setcolor(15);
setfillstyle(1,15);
rectangle(80,0,556,476);
floodfill(81,1,15);
setcolor(1);
setfillstyle(1,1);
circle(318,238,220);
floodfill(318,238,1);
setcolor(0);
settextstyle(4,0,4);
outtextxy(150,180,"REPRESNENTED BY :-");
setcolor(15);
settextstyle(10,0,4);
outtextxy(200,50,"HOSPITAL");
settextstyle(10,0,2);
outtextxy(140,120,"MANAGEMENT SYSTEM");
settextstyle(8,0,1);
outtextxy(120 ,240,":-VISHU CHHABRA :- ABHISHEK PANDEY");
outtextxy(120,280,":-AMMAR HUSEN   :-NANDAN KUMAR");
outtextxy(130,320,":-DEVVRAT     :-RAMESH KUMAR RAM");

getch();
closegraph();
return 0;
}