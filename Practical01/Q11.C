#include <conio.h>
#include <graphics.h>
void main()
{
    int x, y, x_mid, y_mid, r, d;
    int g_mode, g_driver = DETECT;
    clrscr();
    initgraph(&g_driver, &g_mode, "C:\\TC\\BGI");
    printf("*********** MID POINT Circle drawing algorithm ********\n\n");
    x_mid = 100, y_mid = 200,r = 50;
    x = 0;
    y = r;
    d = 1 - r;
    do
    {
        putpixel(x_mid + x, y_mid + y, 1);
        putpixel(x_mid + y, y_mid + x, 1);
        putpixel(x_mid - y, y_mid + x, 1);
        putpixel(x_mid - x, y_mid + y, 1);
        putpixel(x_mid - x, y_mid - y, 1);
        putpixel(x_mid - y, y_mid - x, 1);
        putpixel(x_mid + y, y_mid - x, 1);
        putpixel(x_mid + x, y_mid - y, 1);
        if (d < 0)
        {
            d += (2 * x) + 1;
        }
        else
        {
            y = y - 1;
            d += (2 * x) - (2 * y) + 1;
        }
        x = x + 1;
    } while (y > x);
    getch();
}
