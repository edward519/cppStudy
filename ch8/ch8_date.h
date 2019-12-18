#ifndef _DATE_H_
#define _DATE_H_

#include <iostream>
using namespace std;

class Date
{
	private:
	int year;
	int month;
	int day;

	public:
	void Set_Date(int _year, int _month, int _day);
	void Add_Day(int inc);
	void Add_Month(int inc);
	void Add_Year(int inc);
	void Get_Date();
};

#endif