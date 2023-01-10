#include <graphics.h>

void main()
{
    int gd = DETECT, gm;
    float shx, shy;
    int choice;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    printf("Enter your choice of shear:\n");
    printf("1. X-shear\n");
    printf("2. Y-shear\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter shear factor shx along x-axis :");
        scanf("%f", &shx);

        line(100, 100, 200, 100);
        line(200, 100, 200, 300);
        line(200, 300, 100, 300);
        line(100, 300, 100, 100);
        printf("X-shear");

        setcolor(12);
        line((100 + (0 * shx)), 100, (200 + (0 * shx)), 100);
        line((200 + (0 * shx)), 100, (200 + (200 * shx)), 300);
        line((200 + (200 * shx)), 300, (100 + (200 * shx)), 300);
        line((100 + (200 * shx)), 300, (100 + (0 * shx)), 100);
    }
    else if (choice == 2)
    {
        int x, y, x1, y1, x2, y2, shear_f;
        printf("\n please enter shearing factor y = ");
        scanf("%d", &shear_f);

        cleardevice();
        line(0, 100, 100, 100);
        line(100, 100, 50, 150);
        line(50, 150, 0, 100);
        setcolor(RED);
        y = 100 + 0 * shear_f;
        y1 = 100 + 100 * shear_f;
        y2 = 150 + 50 * shear_f;

        line(0, y, 50, y1);
        line(50, y1, 50, y2);
        line(50, y2, 0, y);
    }
    else
    {
        printf("Invalid choice.\n");
    }

    getch();
    closegraph();
    
}
