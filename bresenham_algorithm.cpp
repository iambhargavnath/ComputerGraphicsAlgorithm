// Copyright to Bhargav Nath @ 2023 All Rights Reserved //
// Bresenham Algorithm //
#include<iostream>
#include<graphics.h>
using namespace std;

void bresenhamAlgorithm(int x0, int y0, int x1, int y1)
{
    float dx, dy, m;
    dx = x1-x0;
    dy = y1-y0;
    m= dy/dx;
    if(m<1)
    {
        cout<<"Pixels to be drawn are..."<<endl;
        int x = x0;
        int y = y0;
        int pk;
        cout<<"("<<x<<", "<<y<<")"<<endl;
        putpixel(x, y, WHITE);
        pk = (2*dy)-dx;
        while(x<x1)
        {
        	delay(200);
            if(pk<0)
            {
                x = x+1;
                cout<<"("<<x<<", "<<y<<")"<<endl;
                putpixel(x, y, WHITE);
                pk = pk+(2*dy);
            }
            else
            {
                x = x+1;
                y = y+1;
                cout<<"("<<x<<", "<<y<<")"<<endl;
                putpixel(x, y, WHITE);
                pk = pk+(2*dy)-(2*dx);
            }
        }
    }
    else{
        cout<<"Bresenham Algorithm not works when Slope>=0"<<endl;
    }
}

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
    int x0, y0, x1, y1;
    cout<<"*** BRESENHAM ALGORITHM ***"<<endl;
    cout<<"Enter x-coordinate for initial point: ";
    cin>>x0;
    cout<<"Enter y-coordinate for initial point: ";
    cin>>y0;
    cout<<"Enter x-coordinate for final point: ";
    cin>>x1;
    cout<<"Enter y-coordinate for final point: ";
    cin>>y1;
    bresenhamAlgorithm(x0,y0,x1,y1);
    getch();
	closegraph();
    return 0;
}
