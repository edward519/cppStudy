#include <iostream>
using namespace std;

int main()
{
	int x=1, y=4, z;

/*	if(x>2) {
		if(y>2) {
			z=x+y;
			cout << "z = " << z << endl;
		}
	}*/
	if(x>2 && y>2){
		z=x+y;
		cout << "z = " << z << endl;
	}
	else
		cout << "x = " << x << endl;

	return 0;
}