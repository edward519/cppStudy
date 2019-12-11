#include "ch8_triangle.h"

int main()
{
	Triangle t1;
	double a, b, c;


	cout << "변 a를 입력하세요 : ";
	cin >> a;
	cout << "변 b를 입력하세요 : ";
	cin >> b;
	cout << "변 c를 입력하세요 : ";	
	cin >> c;

	t1.SetSide1(a);
	t1.SetSide2(b);
	t1.SetSide3(c);

	t1.CalArea();

	cout << "삼각형의 세 변 " << t1.GetSide1() << " " << t1.GetSide2() << " " << t1.GetSide3() << "의 넓이는 ";
	cout << t1.GetArea() << "입니다." << endl;


	return 0;
};