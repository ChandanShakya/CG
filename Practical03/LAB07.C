// Write a program to scale a triangle half of its size.
//Take necessary parameter from user.

#include <graphics.h>
#include <math.h>

void main()
{
    int gd = DETECT, gm;
    float x1, y1, x2, y2, x3, y3, sx, sy, x4, y4, x5, y5, x6, y6;
    sx = 0.5;
    sy = 0.5;
    
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // Enter the coordinate of triangle
    printf("Enter the coordinate of triangle: ");
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);

    // Enter the scaling factor
    printf("The scaling factor is 0.5,0.5 ");

    // Draw the triangle
    setcolor(5);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Scale the triangle

    x4 = x1 * sx;
    y4 = y1 * sy;
    x5 = x2 * sx;
    y5 = y2 * sy;
    x6 = x3 * sx;
    y6 = y3 * sy;

    // Draw the scaled triangle
    setcolor(7);
    line(x4, y4, x5, y5);
    line(x5, y5, x6, y6);
    line(x6, y6, x4, y4);

    getch();
	closegraph();

}