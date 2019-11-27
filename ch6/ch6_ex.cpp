#include "ch6_exh.h"

unsigned int CalSecond(const unsigned int hour, const unsigned int min, const unsigned int sec)
{
	unsigned int result=0;

	result = hour*HOUR_SEC+min*MIN_SEC+sec;

	return result;
};

bool CalSecond(short int *totalsec, const short int hour, const short int min, const short int sec)
{
	if(hour<0 || min<0 || sec<0)
		return false;
	else
		*totalsec = hour*HOUR_SEC+min*MIN_SEC+sec;

	return true;
}
bool CalTime(const int sec, int *h, int *m, int *s)
{
	if(sec<0)
		return false;
	else
	{
		int tem_sec = sec;
		*h=sec/HOUR_SEC;
		tem_sec=tem_sec%HOUR_SEC;
		*m=tem_sec/MIN_SEC;
		/*tem_sec=tem_sec%MIN_SEC;
		*s=tem_sec*/
		*s=tem_sec%MIN_SEC;
		return true;
	};
}