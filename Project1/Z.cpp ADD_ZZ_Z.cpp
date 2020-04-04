#include <iostream>
#include <vector>
#include<algorithm>
#include<numeric>
#include "NUM.h"
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	int arr[] = { x , y };
	int result = accumulate(begin(arr), end(arr), 0);
	cout << result << endl;
}
