#ifndef _DATE_H_
#define _DATE_H_

#include <iostream>
using namespace std;

class Date
{
	private:
	int year_;
	int month_;
	int day_;

	public:
	void Set_Date(int _year, int _month, int _day);
	void Add_Day(int inc);
	void Add_Month(int inc);
	void Add_Year(int inc);
	void Get_Date();

	Date()
	{
		year_=2012;
		month_=5;
		day_=15;
	}
	//디폴트 생성자

	Date(int year, int month, int day)
	{
		year_=year;
		month_=month;
		day_=day;
	}
	//생성자	

};

#endif