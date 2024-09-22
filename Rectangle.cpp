#include "Rectangle.h"

bool compare(Rectangle* rect1, Rectangle* rect2)
{
    return (rect1->height * rect1->width) > (rect2->height * rect2->width) ? true : false;
}

Rectangle::Rectangle(double width, double height)
{
    this->width = width;
    this->height = height;
}
