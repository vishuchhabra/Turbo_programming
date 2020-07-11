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
    void page4()
    {
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
    cout<<"***************";
    q=strcmp(a,c);
    gotoxy(25,21);
    if(q==0)
    {
    cout<<"password is correct press enter to continue"<<endl;
 getch();

}
    else
    {
    gotoxy(25,21);
    sound(28
    );
    delay(1000);
    nosound();
  cout<<"password is incorrect !!!! try again"<<endl;
    getch();
    }
    case 2:
    exit(0);
	     }//  }
    getch();
    closegraph();
    }
    void main(){
int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode,"C:\\TURBOC3\\BGI");
     page4();

     }