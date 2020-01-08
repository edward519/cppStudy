#include "ch9_date.h"

void Date::Set_Date(int _year, int _month, int _day)
{
	year_=_year;
	month_=_month;
	day_=_day;
};

void Date::Add_Day(int inc)
{
	switch(month_)
	{
		case 2:
			if(year_%4!=0)
			{
				if(day_+inc>28)
				{
					month_++;
					day_=(day_+inc)%28;
				} else 
				{
					day_+=inc;
				}
			} else
			{
				if(day_+inc>29)
				{
					month_++;
					day_=(day_+inc)%29;
				} else 
				{
					day_+=inc;
				}
			}
		break;
		case 12:
			if(day_+inc>31)
			{
				year_++;
				month_=1;
				day_=(day_+inc)%31;
			} else
			{
				day_+=inc;
			}
		break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(day_+inc>30)
			{
				month_++;
				day_=(day_+inc)%30;
			} else
			{
				day_+=inc;
			}
		break;
		default:
			if(day_+inc>31)
				{
					month_++;
					day_=(day_+inc)%31;
				} else
				{
					day_+=inc;
				}
	}
};

void Date::Add_Month(int inc)
{
	if(month_+inc>12)
	{
		year_++;
		month_=(month_+inc)%12;
	} else 
	{
		month_=(month_+inc)%12;
	}

};

void Date::Add_Year(int inc)
{
	year_+=inc;
};

void Date::Get_Date()
{
	cout << year_ << "년 " << month_ << "월 " << day_ << "일" << endl;
};