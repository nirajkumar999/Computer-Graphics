//Implement mid-point Circle Drawing Algorithm.

#include<bits/stdc++.h>	  //including all standard files of c++  
#include<graphics.h>	  //including graphics header file
#include <stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;


//function to draw a circle
//this function takes x0 and y0 as centre and radius as
//argument

void drawcircle(int x0, int y0, int radius)
{
    int x = radius;
    int y = 0;
    int err = 0;
    
    //Applying Mid-point algorithm 
    
    while (x >= y)
    {
        putpixel(x0 + x, y0 + y, 7);
        putpixel(x0 + y, y0 + x, 7);
        putpixel(x0 - y, y0 + x, 7);
        putpixel(x0 - x, y0 + y, 7);
        putpixel(x0 - x, y0 - y, 7);
        putpixel(x0 - y, y0 - x, 7);
        putpixel(x0 + y, y0 - x, 7);
        putpixel(x0 + x, y0 - y, 7);
 
        if (err <= 0)
        {
             y += 1;
             err += 2*y + 1;
        }
 
        if (err > 0)
        {
            x -= 1;
            err -= 2*x + 1;
        }
    }
}


//main funtion
int main()
{
    int gdriver=DETECT, gmode, error, x, y, r;
    
    // calling the initgraph sfunction which loads the graphics driver and puts the system into graphics mode. 
    
    initgraph(&gdriver, &gmode, (char*)"");

    cout<<"Implement mid-point Circle Drawing Algorithm."<<"\n\n";

    cout<<"Enter radius of circle: ";
    cin>>r;
    
    cout<<"Enter co-ordinates of center (x and y): ";
    cin>>x>>y;
    
    //calling drawcircle function implemented using Mid-point circle       algorithm
    
    drawcircle(x, y, r);			

    getch();
    closegraph();	// closes the graphics mode, deallocates all memory allocated by graphics system
    return 0;

}
