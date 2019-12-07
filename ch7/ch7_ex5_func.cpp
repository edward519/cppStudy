#include "ch7_ex5.h"

int Test(const int a, int *b)
{
	cout << "1. Test : " << a << endl;
	*b=100;
	return 1;
}

int Test(const int a)
{
	cout << "2. Test : " << a << endl;
	return 1;
}