									      #include<iostream.h>
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


   void page7()
   {
			    setcolor(2);
		     setbkcolor(RED);


			cout<<"\n\n\n     I readily acknowledge my"
			    <<"\n     indebtedness to my Mentor"
			    <<"\n     Ms. Neelam Goel"
			    <<"\n     for her support"
			    <<"\n     dedication and honest efforts"
			    <<"\n     that has given us"
			    <<"\n     immense help in"
			    <<"\n     completing this project.";
			 textbackground(LIGHTBLUE);
		       textcolor(GREEN+BLINK);
		 cprintf("\n---------- CREDITS ----------- ");cout<<endl;
		 cprintf("\n  1.ABHISHEK KUMAR(UE178002)"); cout<<endl;
		 cprintf("\n  2.ABHISHEK DAYAL(UE178003)\n");cout<<endl;
		 cprintf("  3.ANAND KUMAR(UE178016)\n");  cout<<endl;
		 cprintf("  4.ROHIT KUMAR(UE178076)\n");


			cout<<"\n\n Press any key to exit.....";
			getch();
			exit(0);
	     }
	     void main()
	     {
		int gd=DETECT,gm;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
	     page7();
	     closegraph();
	     }
