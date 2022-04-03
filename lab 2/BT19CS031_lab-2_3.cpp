//Render a circle such that its circumference touches all the sides of a square. (Circle is inside the square).

#include<bits/stdc++.h>			//including all standard files of c++
#include<graphics.h>			 //including graphics header file
#include <stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;


//main function
int main()
{
   int gd = DETECT,gm;		//introducing variables
   int x ,y ,radius=100;
   
   // calling the initgraph function which loads the graphics driver and puts the system into graphics mode. 
   initgraph(&gd, &gm, (char*)"");
   
   x = getmaxx()/2;		//returns the maximum (X coordinate)/2 for current graphics mode and driver
   
   y = getmaxy()/2;		//returns the maximum Y coordinate for current graphics mode and driver.
   
   //using outtextxy function to print text on graphics screen with coordinates as x=240, y=80

   outtextxy(240,80, (char*)"Circle inside a Square"); 
   
   circle(x, y, radius);		//draws a circle
   
   //In the rectangle function if:
   // |left-right| = |top-bottom|
   // then the rectangle function draws a square
          
   rectangle(420, 340, 218, 138);		// 420-340 = 218-138 = 80, thus making a square
   
   getch();
   closegraph();	// closes the graphics mode, deallocates all memory allocated by graphics system
   return 0;
}

