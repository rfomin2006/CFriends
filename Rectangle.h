#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	friend bool compare(Rectangle* rect1, Rectangle* rect2);
private:
	double width;
	double height;
public:
	Rectangle(double width, double height);
};

#endif