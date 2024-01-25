// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
using namespace std;
class Point
{
    private:
    int x,y;
    public:
   
    Point(int a,int b)
    {
        x=a;
        y=b;
    }

void setx(int c)
    {
        x=c;
        
    }
    int getx()
    {
        return x;
    }
    void sety(int d)
    {
        y=d;
    }
    int gety()
    {
        return y;
    }
    int distance(Point&p1,Point&p2)
    {
         return sqrt(((p1.getx()-p2.getx())*(p1.getx()-p2.getx()))+((p1.gety()-p2.gety())*(p1.gety()-p2.gety())));
      
        cout<<"The distance of the two points is:"<<sqrt(((p1.getx()-p2.getx())*(p1.getx()-p2.getx()))+((p1.gety()-p2.gety())*(p1.gety()-p2.gety())));
    }};
    int main()
    {
        Point p1(2,4);
        Point p2(3,6);
       distance(p1,p2);
    }
