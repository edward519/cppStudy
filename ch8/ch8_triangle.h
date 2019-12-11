#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_

#include <iostream>
#include <math.h>
using namespace std;

class Triangle
{
	public:
		void SetSide1(const double s);
		void SetSide2(const double s);
		void SetSide3(const double s);
		double GetSide1();
		double GetSide2();
		double GetSide3();
		double GetArea();
		int CalArea();

	private:
		double side1, side2, side3, area;
};

#endif