// Write a program to translate a given line 200,200 and 300, 350 with translation factor (20,50).

#include <graphics.h>

void main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, tx, ty, x3, y3, x4, y4;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    x1 = 200;
    y1 = 200;
    x2 = 300;
    y2 = 350;
    tx = 20;
    ty = 50;

    printf("The starting point of line segment is (%d,%d)\n", x1, y1);
    printf("The ending point of line segment is (%d,%d)\n", x2, y2);
    printf("The translation distances are tx = %d, ty = %d", tx, ty);

    setcolor(5);
    line(x1, y1, x2, y2);
    outtextxy(x2 + 2, y2 + 2, "Original line");
    x3 = x1 + tx;
    y3 = y1 + ty;
    x4 = x2 + tx;
    y4 = y2 + ty;
    setcolor(7);
    line(x3, y3, x4, y4);

    outtextxy(x4 + 2, y4 + 2, "Line after translation");

    getch();
	closegraph();

}
