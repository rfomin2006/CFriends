#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
	friend Vector operator*(const Vector& vector, double scalar);
private:
	double x;
	double y;
public:
	Vector();
	Vector(double x, double y);
};

#endif