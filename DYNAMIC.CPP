  #include<iostream.h>
  #include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
int gd,gm;
gd=DETECT;
initgraph(&gd,&gm,"C:\\TC\\BGI");
circle(200,100,30);
line(200,130,200,220);
line(170,150,200,180);
line(230,150,200,180);
line(200,220,170,280);
line(200,220,230,280);  delay(5000);
int i,j,k,l;
for(i=50,j=0;i<=250,j<=250;i+=5,j+=5)
{
delay(120);  clrscr();
if(i<=150){
setcolor(BLUE);
setfillstyle(1,BLUE);
fillellipse(i,300-j,20,20);
}
else
{
setcolor(BLUE);
setfillstyle(1,BLUE);
fillellipse(i,300-j,20,20);
}
}
closegraph();
}