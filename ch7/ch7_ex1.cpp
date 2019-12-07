#include <iostream>
using namespace std;

int main()
{
	int age, radius;
	age=18;
	double height, area;

	cout << "키를 입력하세요 : ";
	cin >> height;

	cout << "반지름 값을 입력하세요 : ";
	cin >> radius;

	area=radius*2*3.14;

	cout << "나이 : " << age << endl;
	cout << "키 : " << height << endl;
	cout << "원의 반지름 : " << radius << endl;
	cout << "원의 넓이 : " << area << endl;

	return 0;
}