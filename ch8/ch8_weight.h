#ifndef _WEIGHT_H_
#define _WEIGHT_H_

#include <iostream>
using namespace std;

class Weight
{
	public:
		void setHeight(const double h);
		void setWeight(const double w);
		double getHeight();
		double getWeight();
		int getWeightStatus();
	private:
		double height, weight;
		int weightstatus;
		int stdWeight();
};

#else
#endif