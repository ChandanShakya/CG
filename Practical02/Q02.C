// Write a program to scale a circle 4 times of its size taking other necessary coordinates from users

#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int gd = DETECT, gm;
    int x, y, r;
    float s;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    printf("Enter the coordinates of the center of the circle: ");
    scanf("%d%d", &x, &y);
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    printf("Enter the scaling factor: ");
    scanf("%f", &s);
    circle(x, y, r);
    circle(x, y, s * r);
    getch();
    closegraph();
}
