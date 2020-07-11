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
       void page2()		//Function definition #1
	{
	clrscr();
	int gd=DETECT,gm;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
setbkcolor(0);
settextstyle(10,0,2);
outtextxy(150,20,"INFORMATION ABOUT PGI:-");
line(20,80,620,80);
line(20,90,620,90);
settextstyle(0,0,2);
outtextxy(15,120,"TYPE->");
outtextxy(15,180,"MOTTO->");
outtextxy(15,240,"ESTABLISHED->");
outtextxy(15,300,"DEAN->");
outtextxy(15,360,"DIRECTOR->");
setcolor(4);
outtextxy(50,140,"INSTITUTE OF NATIONAL IMPORTANCE");
outtextxy(50,200,"SERVICE TO COMMUNITY");
outtextxy(250,260,"1962");
outtextxy(150,320,"SUBHASH VERMA");
outtextxy(150,380,"JAGAT RAM");
	settextstyle(2,0,5);
	setcolor(15);
	outtextxy(435,460,"PRESS ANY KEY TO CONTINUE.... ");
getch();

closegraph();
}
void main()
{
page2();
}