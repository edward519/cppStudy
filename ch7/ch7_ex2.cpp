#include <iostream>
using namespace std;

int main()
{
	int loan, monthpay;
	double yearinter, monthinter;
	yearinter=0.025;

	cout << "대출할 금액을 입력하세요 : ";
	cin >> loan;
	monthinter = yearinter/12;
	monthpay = (loan/12)+(loan*monthinter);

	for(int i=0; i<12; i++)
		cout << i+1 << "월째 납부액 " << monthpay << endl;

	return 0;
}