#include <iostream>
#include <conio.h>
#include <graphics.h>
using namespace std;
int main()
{
	float i,x1,x2,y1,y2,dx,dy,x,y,step,xinr,yinr;
	int gd=DETECT,gm=DETECT;
	initgraph(&gd,&gm," ");
	cout<<"Enter x1,y1:";
	cin>>x1>>y1;
	cout<<"Enter x2,y2:";
	cin>>x2>>y2;
	dx=x2-x1;
	dy=y2-y1;
	if(dx==0&&dy==0)
	{
		putpixel(x1,y1,15);
		getch();
		exit(0);
	}
	if(abs(dx)>=abs(dy))
		step=abs(dx);
	else
		step=abs(dy);
	xinr=dx/step;
	yinr=dy/step;
	x=x1;
	y=y1;
	for(i=1;i<=step;i++)
	{
		putpixel(x,y,15);
		x=x+xinr;
		y=y+yinr;
	}
	getch();
	closegraph();
}
