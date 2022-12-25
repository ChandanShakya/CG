// Q06
// Write a c program to draw a triangle using line function.
// The border of triangle should be of color green and the fill color should be blue.

#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, BLUE);
    line(0, 180, 200, 180);
    line(200, 180, 100, 50);
    line(100, 50, 0, 180);

    floodfill(150, 150, GREEN);
    getch();
    closegraph();
    return 0;
}
