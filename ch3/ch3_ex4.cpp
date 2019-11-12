#include <iostream>
using namespace std;

int main()
{
	int n;

	for(n=0; n<20; n++)
	{
/*		if(n%3==0 || n%5==0)
			cout << n << endl;*/
		if(n%3!=0 && n%5!=0)
			continue;
		else
			cout << n << endl;
	}

	return 0;
}