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
       void page1()		//Function definition #1
	{
	clrscr();
	int gd=DETECT,gm;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
cleardevice();
setbkcolor(0);
setcolor(4);
rectangle(210,200,450,290);
rectangle(275,130,385,240);
rectangle(275,200,385,350);
setfillstyle(1,4);
floodfill(300,250,4);
floodfill(220,201,4);
floodfill(276,131,4);
floodfill(276,201,4);
floodfill(276,301,4);
floodfill(449,285,4);

	 settextstyle(10,0,2);
	 setcolor(15);
	outtextxy(5,40,"POST GRADUATE INSTITUTE(PGI),CHD.");
	 settextstyle(0,0,2);
	 setcolor(15);
       outtextxy(455,200, "An apple a");
       outtextxy(455,240,"day keeps");
       outtextxy(455,280,"the doctor");
       outtextxy(455,320,"away.");
       outtextxy(2,200,"Prevention is");
       outtextxy(10,240,"better than");
       outtextxy(30,280,"cure.");
       setcolor(0);
       outtextxy(220,210,"SAVE EARTH");
       outtextxy(280,250,"SAVE LIFE");

	setcolor(15);
	line (320-150,420-13,320+150,420-13);
	line (320-150,420+12,320+150,420+12);
	line (320-150,420-13,320-150,420+12);
	line (320+150,420+12,320+150,420-13);
	int s=6,w;
	for (int
	x1=171,x2=171,y1=408,y2=431,y=1,S=0;x1<470;x1++,x2++,y++,S++)
		{
		settextstyle(8,0,2);
		setcolor(15);
		line (x1,y1,x2,y2);
		w=(x1-169)/3;
		for (int i=34; i<=78; i++)
		{
			gotoxy(i,23) ;
			cout <<" " ;
		}
		setcolor(15);
		outtextxy(310,440,"LOADING......");
		if (x2>270) s=2; if (x2>370) s=2;
		if (x2==320) delay(2); else
		delay(s);
		}
		delay(2);
		for (int i=27; i<=78; i++)
		{
			gotoxy(i,23) ;
			cout <<" " ;
		}
	settextstyle(2,0,5);
	outtextxy(435,460,"PRESS ANY KEY TO CONTINUE.... ");
	getch();
	closegraph();
	}


	int main()
	{
	page1();

	}