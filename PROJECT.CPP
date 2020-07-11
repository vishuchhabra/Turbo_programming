
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

    class student
{
private:

    char  uid[20];
    char dob[10];
    char father[15];
    char bg[2];
    char sex[1];
    char mob[10];
    char add[40];
    char marks[15];
    char branch[20];
    char rf;
    char f[30];
    unsigned long int fee;

public:
void adddata()
{
cout<<"REGISTRATION ID (name):";   gets(uid);//cin.getline(uid,19);
fstream fout;
fout.open(uid,ios::out);
fout<<"REGISTRATION ID (name):"<<uid<<endl;
cout<<"DATE OF BIRTH(dd\\mm\\yyyy):";cin>>dob;
fout<<"DATE OF BIRTH(dd\mm\yyyy):"<<dob<<endl;
cout<<"FATHER NAME :";gets(father);
fout<<"FATHER NAME :"<<father<<endl;
cout<<"BLOOD GROUP :";cin>>bg;
fout<<"BLOOD GROUP :"<<bg<<endl;
cout<<"SEX(m\\f):";cin>>sex;
fout<<"SEX(m\\f):"<<sex<<endl;
cout<<"MOBILE NO:";cin>>mob;
fout<<"MOBILE NO:"<<mob<<endl;
cout<<"ADDRESS:";gets(add);
fout<<"ADDRESS:"<<add<<endl;
cout<<"+2 MARKS:";gets(marks);
fout<<"+2 MARKS:"<<marks<<endl;
cout<<"BRANCH:";gets(branch);
fout<<"BRANCH:"<<branch<<endl;
cout<<"HAD STUDENT  SUBMITTED TUITION FESS  (y\\n):";
cin>>rf;
if(rf=='y')
{
cout<<"BALANCE:0"<<endl;
fout<<"BALANCE:0"<<endl;
}
else
{
cout<<"BALANCE=50000 "<<endl;
fout<<"BALANCE=50000 "<<endl;
}
fout<<"***********************************"<<endl;
cout<<"REGISTRATION COMPLETED......."<<endl;
cout<<endl;
for(int u=0;u<30;u++)
{
cout<<"<";
delay(20);
}
getch();
fout.close();
}

 void update()
 {
cout<<"ENTER THE REGISTRATION ID:";
gets(uid);
FILE *file;
if(file =fopen(uid,"r"))                 {

 clrscr();
 cout<<"PLEASE SELECT THE OPTION FOR UPDATES:"<<endl;
 cout<<"1.UPDATES AFTER REGISTRATION"<<endl;
    cout<<"2.UPDATES AFTER COMPLETING THE COURSE"<<endl;
    int k;
    cin>>k;
    switch(k)
    {
    case 1:
   {
   clrscr();
   cout<<"ENTER ANY EXTRA WORK IN FIELD OF MEDICAL:";
   gets(add);
   ofstream fout;
   fout.open(uid,ios::app);
   fout<<"UPDATES:"<<endl;
   fout<<"EXTRA WORK IN FIELD OF MEDICAL:"<<add<<endl;
   cout<<"ENTER THE PENDING TUITION FEE OF INSTITUTE:";
   cin>>fee;
   fout<<"PENDING TUITION FEE AMMOUNT :"<<fee<<endl;
   cout<<"ENTER THE HOSTEL ROOM NO. IF ALLOTTED (otherwise nill):";
   gets(branch);
   fout<<"HOSTEL ROOM ALLOTED:"<<branch<<endl;
   fout<<"***********************************"<<endl;

fout.close();
cout<<"UPDATED SUCCESSFULLY !!!!!"<<endl;

      }


      break;
      case 2:
      clrscr();
      cout<<"ENTER YOUR SPECIALIZATION :";
       gets(f);
       ofstream j;
       j<<"ANOTHER UPDATE:"<<endl<<"SPECIALIZATION:"<<f<<endl;
	  j<<"***********************************"<<endl;

j.close();
cout<<"UPDATED SUCCESSFULLY !!!!!"<<endl;

      break;
      }     }
      else
      cout<<"PLEASE ENTER THE VALID USER ID...... "<<endl;

      for(int u=0;u<30;u++)
{
cout<<"<<";
delay(20);
}


      getch();





 }

 };
 void main()
 {
 clrscr();
 student y;
 y.update();
 }


