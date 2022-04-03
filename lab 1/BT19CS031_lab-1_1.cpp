// C++ program for DDA line generation


//including all standard files
//including graphics header file
#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include<conio.h>
#include<iostream>
using namespace std;

//Function to calculate abstract value of a number
int abs(int n)
{
return ((n > 0) ? n : (n * (-1)));
}

//DDA function
void DDA(int X0, int Y0, int X1, int Y1)
{
int dx = X1 - X0;
int dy = Y1 - Y0;
int step = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
float x_ang = dx / (float)step;
float y_ang = dy / (float)step;
float X = X0;
float Y = Y0;

// using putpixel for drawing the line till it reaches to slope end

for (int i = 0; i <= step; i++)
{
putpixel(round(X), round(Y), WHITE);
X += x_ang;
Y += y_ang;
}
}


// Main program
int main()
{

int gd = DETECT, gm;

// Initialize graphics function

initgraph(&gd, &gm, NULL);

//Initialisation and declaration of variables
int X0 = 30, Y0 = 40, X1 = 400, Y1 = 700;

DDA(X0, Y0, X1, Y1);

getch();
closegraph();

return 0;
}
