//Rotate a line with end-points (10,10) and (50, 50) by an angle 40 degree in clockwise direction about the point (10,10).

#include<graphics.h>			 //including graphics header file
#include<bits/stdc++.h>			 //including all standard files of c++
#include<math.h>				 //including maths header
#include <stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

//main funtion
int main()
{
  //introducing variables
  int gd=DETECT,gm;
  int pivot_x,pivot_y,x,y,degree;		//pivot_x & pivot_y = x coordinate & y coordinate of Initial points of line respectively
  
  double radian;
  int rotated_point_x,rotated_point_y;		//new rotated line variables

  // calling the initgraph function which loads the graphics driver and puts the system into graphics mode. 
  initgraph(&gd,&gm,(char*)"");
  
  cleardevice();

  cout<<"\t\t*********** ROTATION ABOUT INITIAL POINT*********** \n";
  
  cout<<"\n Enter an initial coordinates of the line = ";
  cin>>pivot_x>>pivot_y;
  
  cout<<"\n Enter a final coordinates of the line = ";
  cin>>x>>y;
  
  line(pivot_x,pivot_y,x,y); //line before rotation which is WHITE in color
  
  outtextxy(200,30, (char*)"White Line before rotation"); 

  cout<<"\n\n Now, Enter a degree = ";
  cin>>degree;

  radian=degree*0.01745;		//converting degree to radian with formula radian = degree*pie/180
  
  rotated_point_x=(int)(pivot_x +((x-pivot_x)*cos(radian)-(y-pivot_y)*sin(radian)));		//rotating point x 
  
  rotated_point_y=(int)(pivot_y +((x-pivot_x)*sin(radian)+(y-pivot_y)*cos(radian)));		//rotating point y
  
  setcolor(GREEN);			//setting color of rotated line to YELLOW
  
  line(pivot_x,pivot_y,rotated_point_x,rotated_point_y); //drawing that line
  
  //using outtextxy function to print text on graphics screen with coordinates as x=200, y=50
  outtextxy(200,50, (char*)"Green Line  after rotating clockwise"); 

  getch();
  closegraph();	// closes the graphics mode, deallocates all memory allocated by graphics system
  return 0;
}
