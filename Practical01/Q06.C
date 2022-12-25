// Q05
// Write a c program to draw the following
// A rectangle with border color red and fill color blue
// Text within the rectangle with color green and font size 20 and font type Gothic
// The text should be "This is rectangle"
// Use graphics.h library

#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setcolor(RED);
    setfillstyle(SOLID_FILL, BLUE);
    rectangle(100, 100, 300, 200);
    floodfill(150, 150, RED);
    setcolor(GREEN);
    settextstyle(GOTHIC_FONT, HORIZ_DIR, 3);
    outtextxy(110, 110, "This is rectangle");
    getch();
    closegraph();
    return 0;
}
