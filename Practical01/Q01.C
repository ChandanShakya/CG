// Q1.
// Write a program to draw a line, rectangle and circle.
// Take necessary parameters from the user.
// Use the graphics.h header file.

#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

	// Line
	line(120, 120, 120, 180);

	// Rectangle
	rectangle(0, 0, 100, 100);

    // Circle
	circle(200, 200, 50);

    getch();
    closegraph();
    return 0;
}
