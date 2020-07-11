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
void exot()
{
	       system("cls");
	cleardevice();


	setbkcolor(4);
	textcolor(15 +128);
	textbackground(2);



			  gotoxy(25,2);
		 cprintf("\n---------- CREDITS ----------- ");cout<<endl;
		 gotoxy(15,6);
		 textbackground(0);
		 textcolor(15);
		 cprintf("1.");
		 gotoxy(17,6);
		 textcolor(2 );
		 textbackground(0);
		 cprintf("I READILY ACKNOWLEDGE MY INDEBTEDNESS TO MY MENTOR");
		 gotoxy(17,8);
		 cprintf("MS.NEELAM GOEL FOR HER SUPPORT,DEDICATION AND HONEST");
		  gotoxy(17,10);
		  cprintf("EFFORTS THAT HAS GIVEN US IMMENSE HELP IN COMPLETING ");
		  gotoxy(17,12);
		  cprintf("THE PROJECT.");
		 gotoxy(15,15);
		 textbackground(0);
		 textcolor(2);
		 cprintf("2.");
		 textcolor(15);
		 gotoxy(17,15);
		 cprintf("ALSO THANKFUL TO ALL THE TEAM MEMBERS.");
		 gotoxy(40,20);

		    //	setbkcolor(12);
	textcolor(15 +128);
	textbackground(2);
	cprintf("PRESS ENTER TO CONTINUE.........");

			getch();
			exit(0);
			}
			}