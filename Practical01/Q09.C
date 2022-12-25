// Program to draw a semicircle and U shaped circle in C
// Using graphics.h library

#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    
    // Drawing a semicircle
    arc(100, 100, 0, 180, 50);
    line(50, 100, 150, 100);

    // Drawing a U shaped circle
    arc(300, 100, 150, 30, 50);
    getch();
    closegraph();
    return 0;
}
