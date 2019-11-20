#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char s_str[30]="", d_str[30]="";
	int i=0;

	cout << "Input Id Number: ";
	cin >> s_str;

/*	for(i=0; s_str[i]!='\0'; i++)
		d_str[i]=s_str[i];
	d_str[i]=s_str[i]; //for copy '\0'*/
	strcpy(d_str,s_str); //in ubuntu, strcpy should include 'cstring' header and using namespace std;

	cout << s_str << endl;
	cout << d_str << endl;

	return 0;
}