#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;

class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle();
    Rectangle(double x, double y);
    void setWidth(double newWidth);
    void setHeight(double newHeight);
    void getArea();
    void getCircum();
};

#endif // RECTANGLE_H
