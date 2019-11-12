#include <iostream>
using namespace std;

int main()
{
	double miles = 100;
	double MILE_TO_KILOMETER = 1.609;
	double kilometer;

	kilometer = miles * MILE_TO_KILOMETER;

	cout << miles << "miles = " << kilometer << "kilometer." <<endl;
	return 0;
}