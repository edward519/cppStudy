#include <iostream>
using namespace std;

int main()
{
	int score[5]={100,90,45,100,98};
	int total=0;
	int *p_score;
	int *p_total;

	p_score=score;
	p_total=&total;

/*	for(int i=0; i<5; i++)
		total=total+score[i];

	for(int i=0; i<5; i++)
		cout << "score" << i+1 << " = " << *(p_score + i)<< endl;*/

	for(int i=0; i<5; i++)
	{
		total=total+score[i];
		cout << "score" << i+1 << " = " << *(p_score + i)<< endl;
	}

	cout << "total = " << *p_total << endl;

	return 0;
}