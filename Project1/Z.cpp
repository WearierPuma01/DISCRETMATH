#include <iostream>
#include <vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int arr[] = { x };
	int result = accumulate(begin(arr), end(arr), 0);
	cout << result << endl;
}
