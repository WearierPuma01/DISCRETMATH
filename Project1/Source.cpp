#include <iostream>
using namespace std;

void main()
{
	int i;
	char* string1;
	cin >> string1;
	cout << "\n";
	for (i = 0; i < strlen(string1); i++)
		cout << string1[i] << "\n";
}