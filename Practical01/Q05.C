// Q05
// Program to draw a line using DDA algorithm where starting coordinate is taken from the user where ending coordinate is 600 and 300.
// Using graphics.h header file.

#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <stdio.h>

void main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, dx, dy, steps, k;
    float x, y, xinc, yinc;
    x2 = 600;
    y2 = 300;
    printf("Enter the value of x1 and y1: ");
    scanf("%d%d", &x1, &y1);
    printf("The value of x2 and y2 are 600 and 300 respectively.");
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    dx = x2 - x1;
    dy = y2 - y1;
    if (abs(dx) > abs(dy))
    {
        steps = abs(dx);
    }
    else
    {
        steps = abs(dy);
    }
    xinc = dx / (float)steps;
    yinc = dy / (float)steps;
    x = x1;
    y = y1;
    putpixel(x, y, 15);
    for (k = 0; k < steps; k++)
    {
        x += xinc;
        y += yinc;
        putpixel(x, y, 15);
    }
    getch();
    closegraph();
}
