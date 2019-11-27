#include "ch5_ex1h.h"

int main()
{
	ITEM data[10]={
		{"201008101", "정소희", 87,98,56,0,0},
		{"201008102", "이아름", 67,77,10,0,0},
		{"201008103", "김동현", 100,98,100,0,0},
		{"201008104", "박진영", 89,90,70,0,0},
		{"201008105", "김소연", 99,88,77,0,0},
		{"201008106", "박희동", 23,60,77,0,0},
		{"201008107", "임달자", 84,98,34,0,0},
		{"201008108", "강창후", 100,82,87,0,0},
		{"201008109", "권동수", 65,77,45,0,0},
		{"201008110", "김창민", 100,90,89,0,0}
	};

	ITEM temp;
	int i, j;

	for(i=0; i<10; i++)
	{
		data[i].score[3] = data[i].score[0]+data[i].score[1]+data[i].score[2];
		data[i].score[4] = data[i].score[3]/3;
	}

	for(i=0; i<10; i++)
	{
		for(j=i+1; j<10; j++)
		{
			if(data[i].score[3]<data[j].score[3])
			{
				temp=data[i];
				data[i]=data[j];
				data[j]=temp;
			}
		}
	}

	for(i=0; i<10; i++)
	{
		cout << "학번 : " << data[i].id << "  ";
		cout << "이름 : " << data[i].name << "  ";

		for(j=0; j<5; j++)
		{
			//cout << data[i].score[j] << "  ";
			cout << setw(5) << data[i].score[j]; //점수가 깔끔하게 나오게 정리
		}
		cout << endl;
	}
	return 0;
}