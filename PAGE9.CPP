    #include<iostream.h>									      #include<iostream.h>
    #include<graphics.h>
    #include<conio.h>
    #include<dos.h>
    #include<stdlib.h>
    #include<stdio.h>
    #include<ctype.h>
    #include<fstream.h>
    #include<process.h>
    #include<string.h>
    #include<iomanip.h>
     void main()
{
	int gd=DETECT,gm;
initgraph(&gd,&gm,"C://TURBOC3//BGI");

cleardevice();
  setcolor(1);
  setfillstyle(1,1);
  fillellipse(320,270,300,160);
  setcolor(1);
  settextstyle(0,0,3);

  outtextxy(1,50,"OUR FACILITIES TOWARDS YOU:-");
  setcolor(15);
  line(1,80,640,80);
    line(1,82,640,82);
  settextstyle(0,0,2);
  outtextxy(150,150,"OUR RARE DEVICES,LIKE:-");
  outtextxy(135,190,"1.3-D MAMMOGRAPHY MACHINES");
  outtextxy(135,220,"2.ROBOT SURGICAL MACHINES");
  outtextxy(135,250,"3.M R I");
  outtextxy(135,280,"4.CAT SCANNERS");
  outtextxy(135,310,"5.PARTICLE ACCELERATORS");
  outtextxy(140,350,"CONTACT NO.- 6283032071");
  setcolor(1);
  outtextxy(410,450,"PRESS ENTER......");
  getch();

cleardevice();
  setcolor(2);
  setfillstyle(1,2);
  fillellipse(320,270,300,160);
  setcolor(2);
  settextstyle(0,0,3);

  outtextxy(1,50,"OUR FACILITIES TOWARDS YOU:-");
  setcolor(15);
  line(1,80,640,80);
    line(1,82,640,82);
  settextstyle(0,0,2);
  outtextxy(150,150,"OUR OTHER FACILITIES:-");
  outtextxy(135,190,"1.BLOOD BANK,LABORATORIES");
  outtextxy(135,220,"CONTACT NO.9464027483");
  outtextxy(135,250,"2.24*7 ICU AND AMBULANCES");
  outtextxy(135,280,"CONTACT NO. 9463884625");
  outtextxy(75,310,"NOTE-IN CASE EMERGRNCY LIKE FIRE");
  outtextxy(140,350,"CONTACT NO.- 9413156487");
  outtextxy(
  setcolor(2);
  outtextxy(410,450,"PRESS ENTER......");


  getch();
  }