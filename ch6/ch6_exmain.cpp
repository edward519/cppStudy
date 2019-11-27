#include "ch6_exh.h"

int main()
{
	
	unsigned int hour, min, sec;

	hour=3, min=16, sec=54;
	cout << "3:15:54를 초로 계산한 결과 : " << CalSecond(hour, min, sec) << endl;

	short int s_hour, s_min, s_sec, t_sec;

	s_hour = 4, s_min = 32, s_sec = 16;
	CalSecond(&t_sec, s_hour, s_min, s_sec);
	cout << "4:32:16를 초로 계산한 결과 : " << t_sec << endl;

	int i_hour, i_min, i_sec, i_time;
	i_time = 3932;
	CalTime(i_time, &i_hour, &i_min, &i_sec);
	cout << "3932초를 시간으로 계산한 결과 : " << i_hour << "시 " << i_min << "분 " << i_sec << "초" << endl;

	return 0;
}