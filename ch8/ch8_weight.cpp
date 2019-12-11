#include "ch8_weight.h"

void Weight::setHeight(const double h)
{
	height=h;
};

void Weight::setWeight(const double w)
{
	weight=w;
};

double Weight::getHeight()
{
	return height;
};

double Weight::getWeight()
{
	return weight;
};

int Weight::getWeightStatus()
{
	stdWeight();
	return weightstatus;
};

int Weight::stdWeight()
{
	double stdw=(height-110)*0.9;

	if ((stdw+0.5)>weight)
		weightstatus=-1;
	else if((stdw-0.5)<weight)
		weightstatus=1;
	else
		weightstatus=0;

	return 1;
};