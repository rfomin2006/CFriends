#include "Vector.h"

Vector::Vector()
{
	this->x = 0;
	this->y = 0;
}

Vector::Vector(double x, double y)
{
	this->x = x;
	this->y = y;
}

Vector operator*(const Vector& vector, double scalar)
{
	return Vector(vector.x*scalar, vector.y*scalar);
}
