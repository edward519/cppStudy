#include <iostream>
using namespace std;

int main()
{
	int score;
	char grade;

	do{
		cout << "Input score";
		cin >> score;
	} while (score>100 || score<0);

	switch (score/10){
		case 10:
		case 9:
			grade='A';
			break;
		case 8:
			grade='B';
			break;
		case 7:
			grade='C';
			break;
		default :
			grade='F';
			break;
	}
	cout << "grade = " << grade << endl;

	return 0;
}