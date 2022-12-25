// Write a program to draw a triangle whose border is red color and body is filled with green color with some text of choice with red color with font size of 5, horizontal direction with font family 1

#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setcolor(RED);
    settextstyle(1, HORIZ_DIR, 5);
    setfillstyle(SOLID_FILL, GREEN);
    outtextxy(300, 100, "Hello World");
    line(100, 100, 200, 100);
    line(200, 100, 150, 200);
    line(150, 200, 100, 100);
    floodfill(150, 150, RED);
    getch();
    closegraph();
    return 0;
}
