// Q2
// Program to display some text in red color with the font family of choice
// Use graphics.h header file

#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    settextstyle(3, HORIZ_DIR, 4);
    setcolor(RED);
    outtextxy(100, 100, "Hello World!");
    getch();
    closegraph();
    return 0;
}
