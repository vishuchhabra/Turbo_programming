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
	outtextxy(5,40,"POST GRADUATE INSTITUTE(PGI),ABH.");
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
      // outtextxy(220,210,"SAVE EARTH");
      // outtextxy(280,250,"SAVE LIFE");

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
		setcolor(RED+BLINK);
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
	}


       void page2()		//Function definition #1
	{
	clrscr();
	cleardevice();
setbkcolor(0);
settextstyle(10,0,2);
outtextxy(150,20,"INFORMATION ABOUT PGI:-");
line(20,80,620,80);
line(20,90,620,90);
setcolor(4);
settextstyle(0,0,2);
outtextxy(15,120,"TYPE->");
outtextxy(15,180,"MOTTO->");
outtextxy(15,240,"ESTABLISHED->");
outtextxy(15,300,"DEAN->");
outtextxy(15,360,"DIRECTOR->");
setcolor(15);
outtextxy(50,140,"INSTITUTE OF NATIONAL IMPORTANCE");
outtextxy(50,200,"SERVICE TO COMMUNITY");
outtextxy(250,260,"1962");
outtextxy(150,320,"SUBHASH VERMA");
outtextxy(150,380,"JAGAT RAM");
	settextstyle(2,0,5);
	setcolor(4);
	outtextxy(435,460,"PRESS ANY KEY TO CONTINUE........");
getch();
}
void page4()
    {
	clrscr();
	cleardevice();
    setbkcolor(1);
    setcolor(15);
    settextstyle(10,0,1);
    outtextxy(20,40,"ENTER THE PASSWORD FOR MANAGEMENT ");
    char c[6];
    char a[6]={"vishu"};
	       gotoxy(10,10);
    cout<<"1.PRESS ONE FOR PASSWORD/IF PASS. IS INCORRECT IT WILL AUT. EXIT"<<endl;
    gotoxy(10,12);
    cout<<"2.PRESS TWO FOR EXIT FROM THE SOWTWARE";
    int p,q,y;
    gotoxy(10,14);
    cin>>p;
 //   while(1)
   // {
    switch(p)
    {
    case 1:
    gotoxy(20,18);
    cout<<"ENTER THE FIVE CHARACTER PASSWORD"<<endl;
    gotoxy(20,19);
    gets(c);

    gotoxy(20,19);
    cout<<"************";
    q=strcmp(a,c);
    gotoxy(25,21);
    if(q==0)
    {
    cout<<"password is correct press enter to continue"<<endl;


}
    else
    {
    gotoxy(25,21);
    sound(28);
    delay(1000);
    nosound();
  cout<<"password is incorrect !!!! try again"<<endl;
  exit(0);
    }
    break;
    case 2:
    exit(0);
    break;
    default :
    gotoxy(25,21);
    cout<<"INVALID CHIOCE!!!!TRY AGAIN";
    getch();
    exit(0);
	     }//  }


     for(int i=25;i<100;i++)
     {
     delay(10);
     cout<<"<";
     }
   // getch();
   cout<<endl;
   system("pause");
    }
    void page5()
{
     clrscr();
     cleardevice();
 setbkcolor(0);
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
			     outtextxy(50,180,"3.FACILITIES IN HOSPITAL");
			     outtextxy(50,220,"4.COLLABORATION \\ ALLIANCE");
			     outtextxy(50,260,"5.EXIT");
				setcolor(1);
	line (320-150,420-13,320+150,420-13);
	line (320-150,420+12,320+150,420+12);
	line (320-150,420-13,320-150,420+12);
	line (320+150,420+12,320+150,420-13);
	int s=2,w;
	for (int
	x1=171,x2=171,y1=408,y2=431,y=1,S=0;x1<470;x1++,x2++,y++,S++)
		{
		settextstyle(8,0,2);
		setcolor(1);
		line (x1,y1,x2,y2);
		w=(x1-169)/3;
		for (int i=34; i<=78; i++)
		{
			gotoxy(i,23) ;
			cout <<" " ;
		}
		setcolor(15+BLINK);
		outtextxy(310,440,"LOADING......");
		if (x2>270) s=1; if (x2>370) s=1;
		if (x2==320) delay(1); else
		delay(s);
		}
		delay(1);
		for (int i=27; i<=78; i++)
		{
			gotoxy(i,23) ;
			cout <<" " ;
		}
	settextstyle(2,0,5);
	outtextxy(435,460,"PRESS ANY KEY TO CONTINUE.... ");

 getch();

 }
  page6()
 {
  clrscr();
  cleardevice();
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
outtextxy(72,365,"3.FACILITY");
outtextxy(410,365,"4.ALLIANCE");

//  line(300,240,150,120);
 // line(300,240,150,350);
//  line(340,240,510,100);
 // line(340,230,510,370);

  return 0;
  }
void main()
{
	int gd=DETECT,gm;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
page1();
page2();
page4();
page5();
page6();
 outtextxy(1,13,"ENTER THE CHOICE:-");

 gotoxy(38,2);
 int x;
 cin>>x;
 setcolor(2);
 settextstyle(0,0,1);
  outtextxy(420,450,"PRESS ENTER TO CONTINUE.....");
  getch();
  cleardevice();
  closegraph();


}
