#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setfillstyle(SOLID_FILL,BLUE);
circle(150,250,20);
floodfill(151,250,WHITE);
circle(200,100,30);
line(200,130,200,220);
line(170,150,200,180);
line(230,150,200,180);
line(200,220,170,280);
line(200,220,230,280);
getch();
closegraph();
}