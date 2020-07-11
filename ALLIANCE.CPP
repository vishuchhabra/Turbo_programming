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
setcolor(2);
setfillstyle(1,2);
rectangle(30,100,600,400);
floodfill(40,101,2);
setcolor(15);
settextstyle(0,0,4);
outtextxy(150,10,"ALLIANCE\\CO  ");
getch();
}


