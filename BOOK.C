#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
 int gd = DETECT, gm;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 line(270,130,270,350);
 line(272,130,272,350);
  line(270,130,420,100);
  line(270,130,120,100);
   line(270,350,120,300);
   line(270,350,420,300);
    line(120,100,120,300);
    line(420,100,420,300);
line(440,115,440,320);
 line(420,100,440,115);
  line(420,300,440,320);
   line(271,350,271,375);
   line(271,375,440,320);
line(271,375,130,330);
line(120,300,130,330);

  outtextxy(140,150,"\n C \n");
  outtextxy(140,170,"\n Language \n");
  outtextxy(290,150,"WELCOME to");
  outtextxy(290,160,"c Programming");
  getch();






}