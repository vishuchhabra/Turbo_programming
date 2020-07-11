#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
settextstyle(8,0,3);
rectangle(20,50,620,600);
setcolor(7);
setbkcolor(6);
outtextxy(20,20,"ABOUT US");
settextstyle(8,0,2);
outtextxy(40,45,"OUR SERVICES :-");
outtextxy(120,62,"DYALYSIS :");
settextstyle(1,0,1);
outtextxy(190,82,"- DYLASIS");
outtextxy(190,100,"- ENT");
outtextxy(190,118,"- GENRAL SURGERY");
outtextxy(190,136,"- GYNECOLOGICAL CLINIC");
outtextxy(190,154,"- ORTHOPEDICS");
outtextxy(190,172,"- INTERNAL MEDICINE");
outtextxy(30,190,"GENRAL SURGERY : -  Genral surgery is surgical spacility");
line(26,210,195,210);
line(26,212,195,212);
outtextxy(30,208,"that deals with 'stomach esophangus,colon,small bown,liver");
outtextxy(30,223,"gall blader,bill duct and  pancrease.It also deals with thyoriod");
outtextxy(22,240,"disorder breast,skin,harnias and soft tissues.Our skilled surgical");
outtextxy(30,258,"team specilize in the diagnosis preoprative management and ");
outtextxy(30,276,"postoprative management of the patient.");
outtextxy(30,282," ");
outtextxy(30,300,"FACILITY : 1-All major and minor surgical opration.");
line(30,320,110,320);
line(30,323,110,323);
outtextxy(20,320,"2-Physiotherapy,F.C.G.,Ambulance,Laboratery and x-Ray service ");
outtextxy(30,336,"for  Admission (Indoor).");
outtextxy(30,354,"3-Deluxe A.C.,private room and economic bed");
outtextxy(30,372,"4-Cashless medicine avilable");

getch();
closegraph();
return 0;
}