#include <graphics.h>
#include <math.h>

void main()
{
    int gd = DETECT, gm;
    float x1, y1, x2, y2, x3, y3, a, t;
    float x1_rotated, y1_rotated, x2_rotated, y2_rotated, x3_rotated, y3_rotated;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    printf("Enter coordinates of first vertex:\n");
    scanf("%f%f", &x1, &y1);
    printf("Enter coordinates of second vertex\n");
    scanf("%f%f", &x2, &y2);
    printf("Enter coordinates of third vertex\n");
    scanf("%f%f", &x3, &y3);
    printf("Enter angle for rotation\n");
	scanf("%f", &a);

	setcolor(5);
	line(x1 +200, y1+200, x2+200, y2+200);
	line(x2 +200, y2+200, x3+200, y3+200);
	line(x3 +200, y3+200, x1+200, y1+200);
	outtextxy(x2 + 202, y2 + 202, "Original line");
	t = a * (3.14 / 180);  // Convert angle to radians
	x1_rotated = (x1 * cos(t)) - (y1 * sin(t));
	y1_rotated = (x1 * sin(t)) + (y1 * cos(t));
	x2_rotated = (x2 * cos(t)) - (y2 * sin(t));
	y2_rotated = (x2 * sin(t)) + (y2 * cos(t));
	x3_rotated = (x3 * cos(t)) - (y3 * sin(t));
	y3_rotated = (x3 * sin(t)) + (y3 * cos(t));
	getch();
	setcolor(7);
	line(x1_rotated + 200, y1_rotated+ 200, x2_rotated+ 200, y2_rotated+ 200);
	line(x2_rotated + 200, y2_rotated+ 200, x3_rotated+ 200, y3_rotated+ 200);
	line(x3_rotated + 200, y3_rotated+ 200, x1_rotated+ 200, y1_rotated+ 200);
	outtextxy(x2_rotated + 202, y2_rotated + 202, "Line after rotation");
	getch();
	closegraph();
}
