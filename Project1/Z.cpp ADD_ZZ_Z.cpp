#include <iostream>
#include<algorithm>
#include<numeric>
#include "NUM.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int x, y;
	cout<<"¬ведите первое число:";
	cin >> x;
	cout << "¬ведите второе число:";
	cin >> y;

	int arr[] = { x , y };
	int result = accumulate(begin(arr), end(arr), 0);
	cout <<"—умма двух целых чисел = "<< result << endl;
}
