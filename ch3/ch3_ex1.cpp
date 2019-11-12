#include <iostream>
using namespace std;

int main()
{
	int x=4, y=4, z;

	if(x>2) {
		if(y>2) {
			z=x+y;
			cout << "z = " << z << endl;
		}
	}
	else
		cout << "x = " << x << endl;

	return 0;
}