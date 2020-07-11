

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
for(int u=10;u<600;u++)
{

setbkcolor(0);
setcolor(15);

line(u,200,u+200,200);
line(u+170,170,u+200,200);
line(u+200,200,u+170,230);
delay(10);
cleardevice();
}
closegraph();
}