

//HEADERS FILES**************************************************
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

    void main()
{

int gd=DETECT,gm;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
setcolor(15);
settextstyle(0,0,2);
setbkcolor(0);
outtext("ENTER YOUR NAME THEN I WILL CHECK:");
char ch[5];
gotoxy(10,10);
gets(ch);

setcolor(15);
settextstyle(0,0,2);
outtextxy(220,250,"WAIT I AM  CHECKING .........");
setcolor(2);
rectangle(100,200,500,230);
for(int  y=101;y<300;y++)
{
line(y,201,y,229);
delay(6);
}
for(int  c=200;c<500;c++)
{
line(c,201,c,229);
delay(11);
}
cleardevice();
setbkcolor(2);
setcolor(15);
int h=strcmp(ch,"reetu");
if (h==0)
outtext("SHE IS JANWAR ");
else
outtext("VERY NOBLE PERSONALITY");
getch();
closegraph();
}