// Program to translate or scale a rectangle with a user's choice.

#include <graphics.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void translate(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int tx, int ty)
{
    int x1t, y1t, x2t, y2t, x3t, y3t, x4t, y4t;
    x1t = x1 + tx;
    y1t = y1 + ty;
    x2t = x2 + tx;
    y2t = y2 + ty;
    x3t = x3 + tx;
    y3t = y3 + ty;
    x4t = x4 + tx;
    y4t = y4 + ty;
    line(x1t, y1t, x2t, y2t);
    line(x2t, y2t, x3t, y3t);
    line(x3t, y3t, x4t, y4t);
    line(x4t, y4t, x1t, y1t);
}
void scaling(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int sx, int sy)
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
    line(x1s, y1s, x2s, y2s);
    line(x2s, y2s, x3s, y3s);
    line(x3s, y3s, x4s, y4s);
    line(x4s, y4s, x1s, y1s);
}
int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, x3, y3, x4, y4, tx, ty, sx, sy, choice;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    printf("Enter the coordinates of the rectangle: ");
    scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
    cleardevice();
    printf("1: Translation of the rectangle\n");
    printf("2: Scaling of the rectangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    cleardevice();
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x4, y4);
    line(x4, y4, x1, y1);
    switch (choice) {
    case 1:
        printf("Enter the translation factor: ");
        scanf("%d %d", &tx, &ty);
        translate(x1, y1, x2, y2, x3, y3, x4, y4, tx, ty);
        break;
    case 2:
        printf("Enter the scaling factor: ");
        scanf("%d %d", &sx, &sy);
        scaling(x1, y1, x2, y2, x3, y3, x4, y4, sx, sy);
        break;
    default:
        printf("Invalid choice!");
    }
    getch();
    closegraph();
    return 0;
}

