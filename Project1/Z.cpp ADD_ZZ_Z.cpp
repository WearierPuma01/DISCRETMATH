#include <iostream>  //����� ���� ����� �����
#include<algorithm>
#include<numeric>
#include "NUM.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int x, y;
	cout<<"������� ������ �����:";
	cin >> x;
	cout << "������� ������ �����:";
	cin >> y;

	int arr[] = { x , y };
	int result = accumulate(begin(arr), end(arr), 0);
	cout <<"����� ���� ����� ����� = "<< result << endl;
}

{ // ��������� ���� ����� �����
#include <iostream>
#include <string>
#include <string.h>
#define MAX 10010
    using namespace std;
    int main() {
        int a, f = 0;
        string str1, str2;
        cout << "������� ������ ����� �����:";
        cin >> str1;
        cout << "������ ����� �����:";
        cin >> str2;
        if (strcmp(str1.c_str(), str2.c_str()) == 0) {
            cout << "0";
            return 0;
        }
        int term_1[MAX], term_2[MAX], result[MAX];
        memset(term_1, 0, sizeof(term_1));
        memset(term_2, 0, sizeof(term_2));
        memset(result, 0, sizeof(result));

        for (int i = str1.size() - 1, j = MAX - 1; i >= 0; i--, j--) {
            term_1[j] = str1[i] - '0';
        }

        for (int i = str2.size() - 1, j = MAX - 1; i >= 0; i--, j--) {
            term_2[j] = str2[i] - '0';
        }

        for (int i = MAX - 1; i >= 0; i--) {
            a = term_1[i] - term_2[i];
            if (a < 0) {
                a += 10;
                term_1[i - 1] --;
            }
            result[i] = a;
        }
        for (int i = 0; i < MAX; i++) {
            if (result[i] != 0 && !f) {
                f = 1;
            }
            if (f) {
                cout << result[i];
            }
        }
    }
}