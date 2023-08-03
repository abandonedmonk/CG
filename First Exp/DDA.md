# Aim: 
To implement DDA algorithms for drawing a line segment between two given end
points.

# Objective: 
Draw the line using (vector) generation algorithms which determine the pixels
that should be turned ON are called as digital differential analyzer (DDA).It is one of the
techniques for obtaining a rasterized straight line. This algorithm can be used to draw the line
in all the quadrants.

# Theory:
DDA algorithm is an incremental scan conversion method. Here we perform calculations at
each step using the results from the preceding step. The characteristic of the DDA algorithm
is to take unit steps along one coordinate and compute the corresponding values along the
other coordinate. Digital Differential Analyzer (DDA) algorithm is the simple line generation
algorithm which is explained step by step here.

# Algorithm:
1.	Start
2.	Get the end points of the line (x1, y1) and (x2, y2)
3.	Calculate, dx = x2 – x1; dy = y2 – y1
4.	Len = abs(dx) > abs(dy) ? abs(dx):abs(dy)
5.	Calculate, xinc = dx / len; yinc = dy / len
6.	X = x1
y = y1
loop while x < x2:
	setpixel(x, y)
	x += xinc
	y += yinc
7.	End
   
# Program:
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

# Output:
 ![image](https://github.com/abandonedmonk/CG/assets/66255580/d804d11d-7301-4a2b-a606-f22702357e33)


# Conclusion:
It is a simple and easy-to-implement algorithm. 
It avoids using multiple operations which have high time complexities. 
It is faster than the direct use of the line equation because it does not use any floating point multiplication and it calculates points on the line.
