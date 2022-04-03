// Program for Bresenham’s Line Drawing Algorithm in C++
//including all standard headers
//including graphics header file


#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include<conio.h>
#include<iostream>
using namespace std;



/* ALGORITHM Assumptions :
 1) Line is drawn from left to right.
 2) x1 < x2 and y1 < y2
 3) Slope of the line is between 0 and 1.
    We draw a line from lower left to upper
    right. */

void drawline(int x0, int y0, int x1, int y1)
{

int dx, dy, p, x, y;

// calculate slope of line
dx = x1 - x0;
dy = y1 - y0;
x = x0;
y = y0;
p = 2 * dy - dx;
while (x < x1)
 {
   if (p >= 0)
    {
      putpixel(x, y, 7);
      y = y + 1;
      p = p + 2 * dy - 2 * dx;
    }
   else
   {
     putpixel(x, y, 7);
     p = p + 2 * dy;
   }
 x = x + 1;
 }
}

int main()
{
int gd = DETECT, gm;

// Initialize graphics function

// calling the initgraph function which loads graphics driver and activates system into graphics mode.


initgraph(&gd, &gm, NULL);

//Initialising and declaring variables

int X0 = 20, Y0 = 30, X1 = 350, Y1 = 678;

drawline(X0, Y0, X1, Y1);

getch();
closegraph();
return 1;
}
