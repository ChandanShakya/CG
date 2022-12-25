// Program to draw a circle using circle function of graphics.h
// The border should be green color and fill color should be blue
// The text inside the circle should be red color
// The text should say "This is circle"

#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, BLUE);
    circle(200, 200, 100);
    floodfill(200, 200, GREEN);
    setcolor(RED);
    outtextxy(150, 150, "This is circle");
    getch();
    closegraph();
    return 0;
}
