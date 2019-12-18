#include "ch8_date.h"

int main()
{
	Date dt;

	int year, month, day, select=0, inc;

	cout << "년도를 입력하세요 : ";
	cin >> year;
	cout << "월를 입력하세요 : ";
	cin >> month;
	cout << "일를 입력하세요 : ";	
	cin >> day;

	dt.Set_Date(year,month,day);

	while(select!=4)
	{
		cout << "더할 항목을 입력하세요" << endl;
		cout << "1.년 2.월 3.일 4.출력 및 종료  :  ";
		cin >> select;

		if(select==4){
			break;
		}
		else if(select==1)
		{
			cout << "더할 값을 입력하세요 ";
			cin >> inc;
			dt.Add_Year(inc);
		} else if(select==2)
		{
			cout << "더할 값을 입력하세요 ";
			cin >> inc;
			dt.Add_Month(inc);
		} else if(select==3)
		{
			cout << "더할 값을 입력하세요 ";
			cin >> inc;
			dt.Add_Day(inc);
		}
	}

	dt.Get_Date();

	return 0;
}