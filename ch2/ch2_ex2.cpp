#include <iostream>
using namespace std;

int main()
{
	int score1=100, score2=78, score3=78;
	int total;
	float average;

	total=score1+score2+score3;
	average=(float)total/3;

	cout << "Total : " << total << endl;
	cout << "Average : " << average << endl;
	return 0;
}