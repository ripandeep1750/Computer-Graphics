#include<conio.h>
#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int main(){
int xc,yc,i,p,x1,y1,y,r,x;
float theta;
int gd=DETECT,gm;
initgraph(&gd,&gm," ");
cout<<"Enter the center of circle:";
cin>>xc>>yc;
cout<<"Enter radius of circle:";
cin>>r;
for(i=0;i<=360;i++){
theta=(i*3.14)/180;
x=(int)(xc+(r*cos(theta)));
y=(int)(yc+(r*sin(theta)));
putpixel(x,y,WHITE);}
getch();
closegraph();
return 0;}

