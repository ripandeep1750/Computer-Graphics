#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
	float m,x1,y1,x2,y2;
	int x,y;
	int gd=DETECT,gm=DETECT;
	printf("Program to generate a line using lineslop/line intercept method\n");
	printf("Enter x1:");
	scanf("%f",&x1);
	printf("Enter y1:");
	scanf("%f",&y1);
	printf("Enter x2:");
	scanf("%f",&x2);
	printf("Enter y2:");
	scanf("%f",&y2);
	initgraph(&gd,&gm,"");
	m=(y2-y1)/(x2-x1);
	for(x=1;x<=x2;x++)
	{
		y=m*(x-x1)+y1;
		putpixel(x,y,15);
	}
	getch();
	closegraph();
}
