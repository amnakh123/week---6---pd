#include<iostream>
using namespace std;

string checkPointPosition(int h, int x, int y);
main()
{
    int h, x, y;
    cout<< "Enter height: ";
    cin>> h;
    cout<< "Enter x coordinate: ";
    cin>> x;
    cout<< "Enter y coordinate: ";
    cin>> y;
    string result=checkPointPosition(h, x, y);
    cout<<result;
}
string checkPointPosition(int h, int x, int y)
{
    int x1 = 0, y1 = 0;
    int x2 = 3*h, y2 = h;
    int x3 = h, y3 = h;
    int x4 = 2*h, y4 = 4*h;
    if((x>x1 && x<x2 && y>y1 && y<y2)||(x>x3 && x<x4 && y>y3 && y<y4))
    {
        return "Inside";
    }
    if((x==x1 || x==x2 || x==x3 || x==x4)&&(y>=y1 && y<=y4))
    {
        return "Border";
    }
     if((y==y1 || y==y2 )&&(x>=x1 && x<=x2))
    {
        return "Border";
    }
    else
    {
        return "Outside";
    }
}