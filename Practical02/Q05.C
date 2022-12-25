// Program to scale a rectangle to half of its size.
// Filling rectangle with red color before scaling and after scaling filling with blue color.

#include<graphics.h>
#include<conio.h>

void scaling(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, float sx, float sy)
{
    int x1s, y1s, x2s, y2s, x3s, y3s, x4s, y4s;
    x1s = x1 * sx;
    y1s = y1 * sy;
    x2s = x2 * sx;
    y2s = y2 * sy;
    x3s = x3 * sx;
    y3s = y3 * sy;
    x4s = x4 * sx;
    y4s = y4 * sy;
    setcolor(BLUE);
    line(x1s, y1s, x2s, y2s);
    line(x2s, y2s, x3s, y3s);
    line(x3s, y3s, x4s, y4s);
    line(x4s, y4s, x1s, y1s);
}
void main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, x3, y3, x4, y4;
    float sx, sy;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    printf("Enter the coordinates of the rectangle: ");
    scanf("%d%d%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

    printf("Enter the scaling factor: ");
    scanf("%f%f", &sx, &sy);

    setcolor(RED);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x4, y4);
    line(x4, y4, x1, y1);
 
    scaling(x1, y1, x2, y2, x3, y3, x4, y4, sx, sy);

    getch();
    closegraph();
}
