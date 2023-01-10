// Write a program to scale a given rectangle twice its size.
// Take coordinate of rectangle from user

#include <graphics.h>
#include <math.h>

void main()
{
    int gd = DETECT, gm;
    float x1, y1, x2, y2, x3, y3, x4, y4, sx, sy, x5, y5, x6, y6, x7, y7, x8, y8;
    sx = 2;
    sy = 2;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // Enter the coordinate of rectangle
    printf("Enter the coordinate of rectangle: ");
    scanf("%f %f %f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

    // Enter the scaling factor
    printf("The scaling factor is 2,2 ");

    // Draw the rectangle
    setcolor(5);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x4, y4);
    line(x4, y4, x1, y1);

    // Scale the rectangle

    x5 = x1 * sx;
    y5 = y1 * sy;
    x6 = x2 * sx;
    y6 = y2 * sy;
    x7 = x3 * sx;
    y7 = y3 * sy;
    x8 = x4 * sx;
    y8 = y4 * sy;

    // Draw the scaled rectangle
    setcolor(7);
    line(x5, y5, x6, y6);
    line(x6, y6, x7, y7);
    line(x7, y7, x8, y8);
    line(x8, y8, x5, y5);

    getch();
	closegraph();

}
