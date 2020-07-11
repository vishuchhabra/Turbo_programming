#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void  main()
{
clrscr();
cout<<"This kids game was developed by VISHU CHHABRA in hostel no. 6\n PANJAB UNIVERSITY at the time of holidays\n Also its name is given by VISHU CHHABRA which  is following as :-\n TIC TAC  "<<endl;
cout<<"press any key to continue the game ............."<<endl;
 getch();
 system("cls");
 for(int y=10;y<=24;y+=7)
 for(int x=50;x<=70;x+=10)
 {
 gotoxy(x,y);
 cout<<"I.";
  }
  gotoxy(1,1);
  printf("Instructions for game are following as:-\n");
  cout<<"For putting any symbol like * or 0 you should follow following pattern:-\n";
  cout<<"1\t2\t3"<<endl<<"4\t5\t6"<<endl<<"7\t8\t9";
  gotoxy(35,4);
  cout<<"Notes:-1.two players must be required.";
  gotoxy(35,6);
  cout<<"2.turn will be for each user one by one.";
  gotoxy(35,7);
  cout<<"3.Symbols:- for user one =* , for user two =0.";
  gotoxy(1,10);
  cout<<"select your position for putting:-";
  int a=0;
  char c,d,e,f,g,h,i,j,k;
  gotoxy(36,10);
  for(int p=0;p<=8;p++)
  {
    cin>>a;
    switch(a)
    {
    case 1:
    gotoxy(52,10); cin>>c;  gotoxy(36,10);
    if(c==d&&d==e)
    {gotoxy(10,17);
    cout<<"user win for"<<d;
    gotoxy(10,19) ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(f==g&& g==h)
    {
       gotoxy(10,17);
    cout<<"user win for"<<g;   gotoxy(10,19);
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(i==j&&j==k)
    {
    gotoxy(10,17);
    cout<<"user win for"<<j;      gotoxy(10,19)  ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(c==f&&f==i)
    {
    gotoxy(10,17);
	cout<<"user win for"<<f;       gotoxy(10,19)   ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(d==g&& g==j)
    {gotoxy(10,17);
    cout<<"user win for"<<j;      gotoxy(10,19)         ;
    cout<<"for new game press enter";
    getch();
    exit(0);
     }
     if(e==h && h==k)
     {
     gotoxy(10,17);
    cout<<"user win for"<<h;         gotoxy(10,19)       ;
    cout<<"for new game press enter";
    getch();
    exit(0);
     }
     if(c==g && g==k)
     {gotoxy(10,17);
    cout<<"user win for"<<g;        gotoxy(10,19)         ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(e==g && g==i)
    {
    gotoxy(10,17);
    cout<<"user win for"<<e;        gotoxy(10,19)          ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    break;
    case 2:
    gotoxy(62,10); cin>>d;   gotoxy(36,10);
      if(c==d&&d==e)
    {gotoxy(10,17);
    cout<<"user win for"<<e;      gotoxy(10,19)             ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(f==g&& g==h)
    {
       gotoxy(10,17);
    cout<<"user win for"<<g;       gotoxy(10,19)             ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(i==j&&j==k)
    {
    gotoxy(10,17);
    cout<<"user win for"<<j;         gotoxy(10,19)            ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(c==f&&f==i)
    {
    gotoxy(10,17);
	cout<<"user win for"<<f;     gotoxy(10,19)             ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(d==g&& g==j)
    {gotoxy(10,17);
    cout<<"user win for"<<g;         gotoxy(10,19)              ;
    cout<<"for new game press enter";
    getch();
    exit(0);
     }
     if(e==h && h==k)
     {
     gotoxy(10,17);
    cout<<"user win for"<<h;        gotoxy(10,19)                ;
    cout<<"for new game press enter";
    getch();
    exit(0);
     }
     if(c==g && g==k)
     {gotoxy(10,17);
    cout<<"user win for"<<g;               gotoxy(10,19)          ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(e==g && g==i)
    {
    gotoxy(10,17);
    cout<<"user win for"<<e;         gotoxy(10,19)                 ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    break;
    case 3:
    gotoxy(72,10); cin>>e;  gotoxy(36,10);
      if(c==d&&d==e)
    {gotoxy(10,17);
    cout<<"user win for"<<d;      gotoxy(10,19)                     ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(f==g&& g==h)
    {
       gotoxy(10,17);
    cout<<"user win for"<<g;       gotoxy(10,19)                     ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(i==j&&j==k)
    {
    gotoxy(10,17);
    cout<<"user win for"<<j;         gotoxy(10,19)                    ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(c==f&&f==i)
    {
    gotoxy(10,17);
	cout<<"user win for"<<i;           gotoxy(10,19)               ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(d==g&& g==j)
    {gotoxy(10,17);
    cout<<"user win for"<<g;         gotoxy(10,19)                      ;
    cout<<"for new game press enter";
    getch();
    exit(0);
     }
     if(e==h && h==k)
     {
     gotoxy(10,17);
    cout<<"user win for"<<h;          gotoxy(10,19)                  ;
    cout<<"for new game press enter";
    getch();
    exit(0);
     }
     if(c==g && g==k)
     {gotoxy(10,17);
    cout<<"user win for"<<g;          gotoxy(10,19)                   ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(e==g && g==i)
    {
    gotoxy(10,17);
    cout<<"user win for"<<g;         gotoxy(10,19)                     ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    break;
    case 4:
    gotoxy(52,17); cin>>f;  gotoxy(36,10);
      if(c==d&&d==e)
    {gotoxy(10,17);
    cout<<"user win for"<<e;         gotoxy(10,19)             ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(f==g&& g==h)
    {
       gotoxy(10,17);
    cout<<"user win for"<<g;        gotoxy(10,19)               ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }

    if(i==j&&j==k)
    {
    gotoxy(10,17);
    cout<<"user win for"<<j;            gotoxy(10,19)      ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(c==f&&f==i)
    {
    gotoxy(10,17);
	cout<<"user win for"<<i;         gotoxy(10,19)      ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(d==g&& g==j)
    {gotoxy(10,17);
    cout<<"user win for"<<j;          gotoxy(10,19)          ;
    cout<<"for new game press enter";
    getch();
    exit(0);
     }
     if(e==h && h==k)
     {
     gotoxy(10,17);
    cout<<"user win for"<<h;       gotoxy(10,19)              ;
    cout<<"for new game press enter";
    getch();
    exit(0);
     }
     if(c==g && g==k)
     {gotoxy(10,17);
    cout<<"user win for"<<g;          gotoxy(10,19)            ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(e==g && g==i)
    {
    gotoxy(10,17);
    cout<<"user win for"<<g;        gotoxy(10,19)         ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    break;
    case 5:
    gotoxy(62,17);  cin>>g; gotoxy(36,10);
      if(c==d&&d==e)
    {gotoxy(10,17);
    cout<<"user win  for"<<d;         gotoxy(10,19)        ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(f==g&& g==h)
    {
       gotoxy(10,17);
    cout<<"user win for"<<g;           gotoxy(10,19)        ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(i==j&&j==k)
    {
    gotoxy(10,17);
    cout<<"user win for"<<j;           gotoxy(10,19)         ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(c==f&&f==i)
    {
    gotoxy(10,17);
	cout<<"user win for"<<f;         gotoxy(10,19)      ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(d==g&& g==j)
    {gotoxy(10,17);
    cout<<"user win for"<<g;                gotoxy(10,19)    ;
    cout<<"for new game press enter";
    getch();
    exit(0);
     }
     if(e==h && h==k)
     {
     gotoxy(10,17);
    cout<<"user win for"<<h;             gotoxy(10,19)        ;
    cout<<"for new game press enter";
    getch();
    exit(0);
     }
     if(c==g && g==k)
     {gotoxy(10,17);
    cout<<"user win for"<<g;              gotoxy(10,19)        ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(e==g && g==i)
    {
    gotoxy(10,17);
    cout<<"user win for "<<g;          gotoxy(10,19)            ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    break;
    case 6:
    gotoxy(72,17);  cin>>h; gotoxy(36,10);
      if(c==d&&d==e)
    {gotoxy(10,17);
    cout<<"user win for"<<d;          gotoxy(10,19)       ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(f==g&& g==h)
    {
       gotoxy(10,17);
    cout<<"user win for"<<g;             gotoxy(10,19)   ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(i==j&&j==k)
    {
    gotoxy(10,17);
    cout<<"user win for"<<j;            gotoxy(10,19)     ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(c==f&&f==i)
    {
    gotoxy(10,17);
	cout<<"user win for"<<f;          gotoxy(10,19)   ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(d==g&& g==j)
    {gotoxy(10,17);
    cout<<"user win for"<<g;             gotoxy(10,19)     ;
    cout<<"for new game press enter";
    getch();
    exit(0);
     }
     if(e==h && h==k)
     {
     gotoxy(10,17);
    cout<<"user win for"<<h;          gotoxy(10,19)         ;
    cout<<"for new game press enter";
    getch();
    exit(0);
     }
     if(c==g && g==k)
     {gotoxy(10,17);
    cout<<"user win for"<<g;        gotoxy(10,19)            ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(e==g && g==i)
    {
    gotoxy(10,17);
    cout<<"user win for"<<g;             gotoxy(10,19)        ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    break;
    case 7:
    gotoxy(52,24);   cin>>i;   gotoxy(36,10);
      if(c==d&&d==e)
    {gotoxy(10,17);
    cout<<"user win for"<<d;           gotoxy(10,19)      ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(f==g&& g==h)
    {
       gotoxy(10,17);
    cout<<"user win for"<<g;               gotoxy(10,19)   ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(i==j&&j==k)
    {
    gotoxy(10,17);
    cout<<"user win for"<<j;           gotoxy(10,19)        ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(c==f&&f==i)
    {
    gotoxy(10,17);
	cout<<"user win for"<<f;           gotoxy(10,19)     ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(d==g&& g==j)
    {gotoxy(10,17);
    cout<<"user win for"<<g;                 gotoxy(10,19) ;
    cout<<"for new game press enter";
    getch();
    exit(0);
     }
     if(e==h && h==k)
     {
     gotoxy(10,17);
    cout<<"user win for"<<h;       gotoxy(10,19)            ;
    cout<<"for new game press enter";
    getch();
    exit(0);
     }
     if(c==g && g==k)
     {gotoxy(10,17);
    cout<<"user win for"<<g;           gotoxy(10,19)   ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(e==g && g==i)
    {
    gotoxy(10,17);
    cout<<"user win for"<<g;        gotoxy(10,19)    ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    break;
    case 8:
    gotoxy(62,24);  cin>>j;    gotoxy(36,10);
      if(c==d&&d==e)
    {gotoxy(10,17);
    cout<<"user win for"<<d;        gotoxy(10,19)     ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(f==g&& g==h)
    {
       gotoxy(10,17);
    cout<<"user win for"<<g;        gotoxy(10,19)    ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(i==j&&j==k)
    {
    gotoxy(10,17);
    cout<<"user win for"<<j;           gotoxy(10,19)  ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(c==f&&f==i)
    {
    gotoxy(10,17);
	cout<<"user win for"<<f;       gotoxy(10,19)   ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(d==g&& g==j)
    {gotoxy(10,17);
    cout<<"user win for"<<g;         gotoxy(10,19)  ;
    cout<<"for new game press enter";
    getch();
    exit(0);
     }
     if(e==h && h==k)
     {
     gotoxy(10,17);
    cout<<"user win for"<<h;          gotoxy(10,19)  ;
    cout<<"for new game press enter";
    getch();
    exit(0);
     }
     if(c==g && g==k)
     {gotoxy(10,17);
    cout<<"user win for"<<g;           gotoxy(10,19)  ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(e==g && g==i)
    {
    gotoxy(10,17);
    cout<<"user win for"<<g;           gotoxy(10,19)  ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    break;

    case 9:
    gotoxy(72,24);  cin>>k;   gotoxy(36,10);
      if(c==d&&d==e)
    {gotoxy(10,17);
    cout<<"user win for"<<d;         gotoxy(10,19)  ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(f==g&& g==h)
    {
       gotoxy(10,17);
    cout<<"user win for"<<g;         gotoxy(10,19)   ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(i==j&&j==k)
    {
    gotoxy(10,17);
    cout<<"user win for"<<k;             gotoxy(10,19);
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(c==f&&f==i)
    {
    gotoxy(10,17);
	cout<<"user win for"<<i;         gotoxy(10,19) ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(d==g&& g==j)
    {gotoxy(10,17);
    cout<<"user win for"<<g;         gotoxy(10,19)      ;
    cout<<"for new game press enter";
    getch();
    exit(0);
     }
     if(e==h && h==k)
     {
     gotoxy(10,17);
    cout<<"user win for"<<h;                gotoxy(10,19);
    cout<<"for new game press enter";
    getch();
    exit(0);
     }
     if(c==g && g==k)
     {gotoxy(10,17);
    cout<<"user win for"<<g;         gotoxy(10,19)        ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    if(e==g && g==i)
    {
    gotoxy(10,17);
    cout<<"user win for"<<g;           gotoxy(10,19)       ;
    cout<<"for new game press enter";
    getch();
    exit(0);
    }
    break;
    default :
    printf("number is invalid ");
    }
    a=0;
  }


	     getch();
 }
