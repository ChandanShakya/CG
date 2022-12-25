// Program to rotate a line in 180 degrees.
// Taking necessary input from user.
// Setting the color of line to CYAN before rotation and to YELLOW after rotation

#include <graphics.h>
#include <math.h>
#include <stdio.h>

void main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, x3, y3, x4, y4;
    int x, y, x0, y0, angle;
    float theta;

    printf("Enter the coordinates of the line: ");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    setcolor(CYAN);
    line(x1, y1, x2, y2);

    x0 = (x1 + x2) / 2;
    y0 = (y1 + y2) / 2;

    theta = 3.14;
    x = x0 + (x1 - x0) * cos(theta) - (y1 - y0) * sin(theta);
    y = y0 + (x1 - x0) * sin(theta) + (y1 - y0) * cos(theta);
    x3 = x;
    y3 = y;

    x = x0 + (x2 - x0) * cos(theta) - (y2 - y0) * sin(theta);
    y = y0 + (x2 - x0) * sin(theta) + (y2 - y0) * cos(theta);
    x4 = x;
    y4 = y;

    delay(1000);
    cleardevice();
    setcolor(YELLOW);
    line(x3, y3, x4, y4);

    getch();
    closegraph();
}
