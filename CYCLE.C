#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
void main(){
int gd = DETECT, gm;
int t1x=120,t1y=400,t2x=450,t2y=400,t1r=70,t2r=70;
int jcx = (t2x+t1x)/2 ,jcy = t1y + 20,jcr = 7;
int flag = 1;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
while(!kbhit()){
//tyre framr
circle(t1x,t1y,t1r);
circle(t2x,t2y,t2r);
//second layer of tyre
circle(t1x,t1y,t1r-10);
circle(t2x,t2y,t2r-10);
//middle point of tyre
circle(t1x,t1y,8);
circle(t2x,t2y,8);
//join connector point
circle(jcx,jcy,jcr);
//pipes which joins jc to t1
line(jcx,jcy+5,t2x,t2y+8);
line(jcx,jcy-5,t2x,t2y-8);
//line which joins jc to seat
line(jcx+5,jcy,jcx+120,jcy-140);
line(jcx-5,jcy,jcx+110,jcy-140);
//seat rect
rectangle(jcx+80,jcy-140,jcx+150,jcy-150);
//pipe whivh joins handle with tyre1
line(t1x+8,t1y+5,t1x+50,t1y-180);
line(t1x-5,t1y-5,t1x+40,t1y-180);
//handles
line(t1x-5,t1y-170,t1x+90,t1y-180);
line(t1x-5,t1y-175,t1x+90,t1y-185);
line(t1x-5,t1y-170,t1x-5,t1y-190);
line(t1x+90,t1y-180,t1x+90,t1y-200);
//joins jc to pipe
line(jcx,jcy+8,t1x+30,t1y-100);
line(jcx,jcy-8,t1x+35,t1y-112);
//pipe between seat to tire 2
line(t2x+8,t2y-5,jcx+117,jcy-140);
line(t2x-8,t2y-5,jcx+107,jcy-140);
//flag

//flag road
line(t1x+45,t1y-180,t1x+45,t1y-300);
switch(flag){
//flag 1
case 0: {line(t1x+45,t1y-300,t1x+100,t1y-250);
	line(t1x+100,t1y-250,t1x+45,t1y-240);
	break;}
//flag2
case 1: {line(t1x+45,t1y-300,t1x+130,t1y-270);
	line(t1x+130,t1y-270,t1x+45,t1y-240);
	break;}
//flag3
case 2: {line(t1x+45,t1y-300,t1x+150,t1y-250);
	line(t1x+150,t1y-250,t1x+45,t1y-240);
	break;}
//flag4
case 3: {line(t1x+45,t1y-300,t1x+110,t1y-215);
	line(t1x+110,t1y-215,t1x+45,t1y-240);
	break;}
//flag5
case 4: {line(t1x+45,t1y-300,t1x+80,t1y-200);
	line(t1x+80,t1y-200,t1x+45,t1y-240);
	break;}
}
//if(flag == 5)
//flag = 1;
//else
//flag = flag+1;
flag = random(4);
outtextxy(50,50,"Cycle");
delay(200);
cleardevice();
}
getch();
closegraph();
}