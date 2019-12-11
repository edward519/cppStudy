#include "ch8_triangle.h"

void Triangle::SetSide1(const double s)
{
	side1=s;
};

void Triangle::SetSide2(const double s)
{
	side2=s;
};

void Triangle::SetSide3(const double s)
{
	side3=s;
};

double Triangle::GetSide1()
{
	return side1;
};

double Triangle::GetSide2()
{
	return side2;
};

double Triangle::GetSide3()
{
	return side3;
};

double Triangle::GetArea()
{
	return area;
};

int Triangle::CalArea()
{
	double s=(side1+side2+side3)/2;
	area=sqrt(s*(s-side1)*(s-side2)*(s-side3));

	return 1;
};