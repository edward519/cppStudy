#include "ch7_ex5.h"

int main()
{
	int kor=90, math=80;

	cout << "* main : kor = " << kor << endl;
	cout << "* main : math = " << math << endl;
	cout << "******************************" << endl;
	Test(kor, &math);
	cout << "******************************" << endl;
	Test(math);
	cout << "******************************" << endl;
	
	Test();
	
	return 0;
}