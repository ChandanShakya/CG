// Write a program to translate a triangle taking necessary coordinates from the user.

#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, x3, y3, tx, ty;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    printf("Enter the coordinates of the triangle: ");
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    printf("Enter the translation factor: ");
    scanf("%d%d", &tx, &ty);
    printf("Original triangle: ");
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    x1 = x1 + tx;
    y1 = y1 + ty;
    x2 = x2 + tx;
    y2 = y2 + ty;
    x3 = x3 + tx;
    y3 = y3 + ty;
    printf("Translated triangle: ");
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    getch();
    closegraph();
}
