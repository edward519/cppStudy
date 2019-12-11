#include "ch8_weight.h"

int main()
{
	Weight w1;

	int sampleh, samplew;

	cout << "키를 입력하세요 : ";
	cin >> sampleh;
	cout << "몸무게를 입력하세요 : ";
	cin >>samplew;

	w1.setHeight(sampleh);
	w1.setWeight(samplew);

	cout << "키 " << w1.getHeight() << "에 몸무게 ";
	cout << w1.getWeight() << "는 ";

	switch(w1.getWeightStatus())
	{
		case -1:
			cout << "저체중";
			break;
		case 0:
			cout << "정상 체중";
			break;
		case 1:
			cout << "과체중";
			break;
		default:
		;
	}

	cout << " 입니다." << endl;

	return 0;
};