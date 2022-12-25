// Q15
// Program to display text message "hello all" inside a circle by using font type 1, vertical direction with font size 2 on coordinate (100,100) pixel

#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    settextstyle(1, 1, 2);
    outtextxy(100, 100, "hello all");
    circle(120, 140, 50);
    getch();
    closegraph();
}
