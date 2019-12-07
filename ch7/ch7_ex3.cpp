#include <iostream>
using namespace std;

int main()
{
	int a=100, i;
	int *pa=&a;
	int arr[5]={1,2,3,4,5};

	cout << "pa = " << pa << endl;
	cout << "&a = " << &a << endl;
	cout << "*pa = " << *pa << endl;
	cout << "a = " << a << endl;

	cout << "*****************************" << endl;
	pa = arr;

	for(i=0; i<5; i++)
		cout << "(pa+" << i << ") = " << pa+i << endl;

	for(i=0; i<5; i++)
		cout << "&arr[" << i << "] = " << &arr[i] << endl;

	cout << "*****************************" << endl;
	cout << "&pa = " << &pa << endl;

	return 0;
}