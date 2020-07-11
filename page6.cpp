#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<stdlib.h>
page5();
int main()
{
 page5();
 return 0;
 }
 page5()
 {  int x;
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  setbkcolor(0);
  setcolor(2);
  setfillstyle(4,2);
  fillellipse(320,240,80,60);
  fillellipse(150,100,80,60);
  fillellipse(490,100,80,60);
  fillellipse(150,370,80,60);
  fillellipse(490,370,80,60);
  setcolor(15);
  settextstyle(0,0,2);
outtextxy(280,236,"5.EXIT");
outtextxy(75,96,"1.DOCTORS");
outtextxy(415,96,"2.PATIENTS");
outtextxy(90,365,"3.TIMING");
outtextxy(410,365,"4.ALLIANCE");

//  line(300,240,150,120);
 // line(300,240,150,350);
//  line(340,240,510,100);
 // line(340,230,510,370);
 outtextxy(1,13,"ENTER THE CHOICE:-");

 gotoxy(38,2);
 cin>>x;
 setcolor(2);
 settextstyle(0,0,1);
  outtextxy(420,450,"PRESS ENTER TO CONTINUE.....");
  getch();
  closegraph();
  return 0;
  }