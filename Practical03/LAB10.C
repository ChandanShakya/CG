#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <process.h>
#include <graphics.h>

int x1, x2, y1, y2, mx, my, depth;

void draw()
{
    bar3d(x1, y1, x2, y2, depth, 1);
}

void translate()
{
    int a1, a2, b1, b2, dep, x, y;
    printf("\n Enter the Translation Distances:");
    scanf("%d%d", &x, &y);
    a1 = x1 + x;
    a2 = x2 + x;
    b1 = y1 + y;
    b2 = y2 + y;
    dep = (a2 - a1) / 4;
    bar3d(a1, b1, a2, b2, dep, 1);
    setcolor(5);
    draw();
}

void rotate()
{
    float t;
    int a1, b1, a2, b2, dep;
    printf("Enter the angle to rotate (in degrees): ");
    scanf("%f", &t);
    t = t * (3.14 / 180.0); // Convert angle to radians
    a1 = mx + (x1 - mx) * cos(t) - (y1 - my) * sin(t);
    a2 = mx + (x2 - mx) * cos(t) - (y2 - my) * sin(t);
    b1 = my + (x1 - mx) * sin(t) - (y1 - my) * cos(t);
    b2 = my + (x2 - mx) * sin(t) - (y2 - my) * cos(t);

    if (a2 > a1)
        dep = (a2 - a1) / 4;
    else
        dep = (a1 - a2) / 4;
    cleardevice();
    bar3d(a1, b1, a2, b2, dep, 1);
    setcolor(5);
}

void scale()
{
    int a1, b1, a2, b2, dep;
    float sx, sy;
    printf("Enter the scaling factors:");
    scanf("%f%f", &sx, &sy);
    a1 = mx + (x1 - mx) * sx;
    a2 = mx + (x2 - mx) * sx;
    b1 = my + (y1 - my) * sy;
    b2 = my + (y2 - my) * sy;
    dep = (a2 - a1) / 4;
    bar3d(a1, b1, a2, b2, dep, 1);
    setcolor(5);

    draw();
}

int main()
{
    int gd = DETECT, gm, choice;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    printf("\nEnter your choice of transformation:\n");
    printf("1. Translation\n");
    printf("2. Rotation\n");
    printf("3. Scaling\n");
    scanf("%d", &choice);

    printf("\nEnter 1st top value(x1,y1):");
    scanf("%d%d", &x1, &y1);
    printf("Enter right bottom value(x2,y2):");
    scanf("%d%d", &x2, &y2);
    depth = (x2 - x1) / 4;
    mx = (x1 + x2) / 2;
    my = (y1 + y2) / 2;
    draw();

    if (choice == 1)
    {
        translate();
    }
    else if (choice == 2)
    {
        rotate();
    }
    else if (choice == 3)
    {
        scale();
    }
    else
    {
        printf("Invalid Choice");
    }

    getch();
    closegraph();

    return 0;
}