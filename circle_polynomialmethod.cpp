#include<graphics.h>  
#include<conio.h>  
#include<math.h>  
int plotpoints(int x, int y, int h, int k)  
{  
    putpixel(x+h, y+k, RED);  
    putpixel(x+h, -y+k, RED);  
    putpixel(-x+h, -y+k, RED);  
    putpixel(-x+h, y+k, RED);  
    putpixel(y+h, x+k, RED);  
    putpixel(y+h, -x+k, RED);  
    putpixel(-y+h, -x+k, RED);  
    putpixel(-y+h, x+k, RED);  
}  
int main()  
{  
    int gd=0, gm,h,k,r;  
    double x,y,x2;  
    h=200, k=200, r=100;  
    initgraph(&gd, &gm, " ");    
    x=0,y=r;  
    x2 = r/sqrt(2);  
    while(x<=x2)  
    {  
        y = sqrt(r*r - x*x);  
        plotpoints(floor(x), floor(y), h,k);  
        x += 1;  
    }  
    getch();  
    closegraph();  
    return 0;  
}
