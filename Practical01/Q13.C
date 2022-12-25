// Write a program to draw two rectangle horizontally in same direction with some text in center in red color and fill rectangle with blue color

#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setcolor(RED);
    settextstyle(3, HORIZ_DIR, 2);
    outtextxy(210, 100, "Hello World");
    rectangle(100, 100, 200, 200);
    rectangle(320, 100, 400, 200);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(150, 150, RED);
    floodfill(350, 150, RED);
    getch();
    closegraph();
}
