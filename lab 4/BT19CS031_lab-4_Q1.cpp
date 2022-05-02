/*  C Program to implement Kite flying in Graphics  */


//Including necessary headers for graphics and standard headers

#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<direct.h>
 

// Driver Code 
int main()
{
        // Initialize of gdriver with
	// DETECT macros
        int gd=DETECT,gm;
        int x=10,y=480;

        // Initialize structure of
	// the kite
        initgraph(&gd,&gm,(char*)"");
        while(!kbhit())
        {
                cleardevice();
                if(y==0)
                {
                        y=rand();
                        x=rand();
                }
                else
                {
                        y=y-1;
                        x=x+1;
                        // Create lines for structure
	                // of the kite
                        line(x-50,y,x,y-70);
                        line(x,y-70,x+50,y);
                        line(x+50,y,x,y+70);
                        line(x,y+70,x-50,y);
                        line(x,y-70,x,y+70);
                        line(x,y+70,x+10,y+140);
                        line(x,y+70,x-10,y+140);
                        line(x-50,y,x+50,y);
                        line(x,y,x+130,y+640);
                }
                delay(20);
        }

       
        // Close the initialized gdriver
        closegraph();
        restorecrtmode();
        return 1;
}