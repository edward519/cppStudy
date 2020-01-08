#include "ch9_date.h"

int main()
{
	int year, month, day, select=0, inc;

	Date d = Date();
	Date dt(2012, 2, 25); //생성자

/*	Date dt;
	cout << "년도를 입력하세요 : ";
	cin >> year;
	cout << "월를 입력하세요 : ";
	cin >> month;
	cout << "일를 입력하세요 : ";	
	cin >> day;

	dt.Set_Date(year,month,day);
*/
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

	d.Get_Date();
	dt.Get_Date();

	return 0;
}