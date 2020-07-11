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
    int main()
    {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    outtext("vishu is good boy live in the big city india");
    outtextxy(240,240,"how are you my dear");
    outtextxy(340,340,"vinayak is my best freind in chandigrah");
    getch();
    closegraph();
    }