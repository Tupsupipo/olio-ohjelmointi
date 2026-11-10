#include "rectangle.h"

Rectangle::Rectangle()
{

}

Rectangle::Rectangle(double x, double y)
{
    width = x;
    height = y;
}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

void Rectangle::getArea()
{
    cout<<"Area of a rectagle is: "<<width*height<<endl;
}

void Rectangle::getCircum()
{
    cout<<"Circum of a rectagle is: "<<(width+height)*2<<endl;
}

