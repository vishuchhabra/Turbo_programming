 #include<iostream.h>
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
void page3()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 setbkcolor(12);
 setcolor(2);
 setfillstyle(1,2);
 rectangle(40,80,600,320);
 floodfill(200,200,2);
 setcolor(1);
 settextstyle(0,0,3);
 outtextxy(200,20,"CONTENTS:-");
 setcolor(15);
 line(200,50,380,50);
 line(200,55,380,55);
 settextstyle(0,0,2);
 outtextxy(50,100,"1.DOCTOR'S INFORMATION");
		   outtextxy(50,140,"2.PATIENT'S INFORMATION");
			     outtextxy(50,180,"3.TIMING OF HOSPITAL");
			     outtextxy(50,220,"4.COLLABORATION \ ALLIANCE");
			     outtextxy(50,260,"5.EXIT");

 getch();
 closegraph();
 }
 void main()
 {
 page3();
 }
