#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<iostream.h>

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(1);
settextstyle(0,0,2);
setfillstyle(2,1)   ;
fillellipse(100,120,80,45);
fillellipse(319,120,80,45);
fillellipse(538,120,80,45);
fillellipse(200,335,80,45);
fillellipse(440,335,80,45);
floodfill(100,120,1);
floodfill(319,120,1);
floodfill(540,120,1);
floodfill(200,335,1);
floodfill(440,335,1);
//floodfill(538,335,4);
settextstyle(0,0,2);
setcolor(15);
settextstyle(1,0,1);
outtextxy(32,110,"1.REGISTRATION");
outtextxy(270,90,"2.UPDATE ");
outtextxy(275,125,"ACCOUNT ");
outtextxy(500,90,"3.SEARCH");
outtextxy(500,125,"ACCOUNT");
outtextxy(170,300,"4.LIST");
outtextxy(180,340,"OF ALL");
outtextxy(400,320,"5.EXIT");
settextstyle(0,0,2);
 outtextxy(1,13,"ENTER THE CHOICE:-");


 gotoxy(38,2);
 int x;
 cin>>x;

settextstyle(0,0,1);
outtextxy(430,440,"PRESS ENTER TO CONTINUE......");
getch();
closegraph();
return 0;
}