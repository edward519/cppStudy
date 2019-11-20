#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char jumin[30]={0,};
	char year[5]={0,}, month[3]={0,}, day[3]={0,};

	cout << "Input Id Number: ";
	cin >> jumin;

	if(jumin[7]=='1' || jumin[7]=='2')
		strcpy(year, "19");
	else
		strcpy(year, "20");

	strncat(year, jumin, 2);
	strncpy(month, jumin+2, 2);
	strncpy(day, jumin+4, 2);

	cout << "Your birthday is " << year << "Y " << month << "M " << day << "D." <<endl;

	return 0;
}