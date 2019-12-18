#include "ch8_date.h"

void Date::Set_Date(int _year, int _month, int _day)
{
	year=_year;
	month=_month;
	day=_day;
};

void Date::Add_Day(int inc)
{
	switch(month)
	{
		case 2:
			if(year%4!=0)
			{
				if(day+inc>28)
				{
					month++;
					day=(day+inc)%28;
				} else 
				{
					day+=inc;
				}
			} else
			{
				if(day+inc>29)
				{
					month++;
					day=(day+inc)%29;
				} else 
				{
					day+=inc;
				}
			}
		break;
		case 12:
			if(day+inc>31)
			{
				year++;
				month=1;
				day=(day+inc)%31;
			} else
			{
				day+=inc;
			}
		break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(day+inc>30)
			{
				month++;
				day=(day+inc)%30;
			} else
			{
				day+=inc;
			}
		break;
		default:
			if(day+inc>31)
				{
					month++;
					day=(day+inc)%31;
				} else
				{
					day+=inc;
				}
	}
};

void Date::Add_Month(int inc)
{
	if(month+inc>12)
	{
		year++;
		month=(month+inc)%12;
	} else 
	{
		month=(month+inc)%12;
	}

};

void Date::Add_Year(int inc)
{
	year+=inc;
};

void Date::Get_Date()
{
	cout << year << "년 " << month << "월 " << day << "일" << endl;
};