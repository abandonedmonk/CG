#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
void main()
{
    int gd = DETECT, gm;
    int i;
    int xinc, yinc, x1, x2, y1, y2, steps, dx, dy;
    initgraph(&gd, &gm, "C:\\turboc3\\bgi");
    printf("Enter values of x1 and x2:");
    scanf("%d %d", &x1, &x2);
    printf("Enter values of y1 and y2:");
    scanf("%d %d", &y1, &y2);
    dx = x2 - x1;
    dy = y2 - y1;
    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);
    xinc = dx / steps;
    yinc = dy / steps;
    for (i = 1; i <= steps; i++)
    {
        putpixel(x1, x2, RED);
        x1 = x1 + xinc;
        y1 = y1 + yinc;
    }
    getch();
    closegraph();
}