#include "N.h"

//����� ���� ����� �����
  int ADD_ZZ_Z(NUM* N1, NUM* N2)
{
	setlocale(LC_ALL, "ru");
    NUM* x ,  y;
    x = N1;
    y = N2;
	cout<<"������� ������ �����:";
	cin >> x;
	cout << "������� ������ �����:";
	cin >> y;

	int arr[] = { x , y };
	int result = accumulate(begin(arr), end(arr), 0);
	cout <<"����� ���� ����� ����� = "<< result << endl;
}



 int SUB_ZZ_Z(NUM* N1, NUM* N2)
{ // ��������� ���� ����� �����


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

        for (int i = str1.size() - 1, j = MAX - 1; i >= 0; i--, j--)
        {
            term_1[j] = str1[i] - '0';
        }

        for (int i = str2.size() - 1, j = MAX - 1; i >= 0; i--, j--)
        {
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

 

 NUM* POZ_Z_D(NUM* N);
{   
    /*

     getSign

     ������� ��� ����������� ��������������� �����. ����������: 2 - ����� �������������,
     0 - ������ ����, 1 - �������������, -1 - ������

     ���������:
     1) numb - ����� �����

     ������� ���������� ��������� ���� - int

    */
    int getSign(NUM numb)
    {
        int check = numb.b;

        if (numb.A)
        {
            for (int i = 0; i < numb.n && check; ++i)
                check = *(numb.A + i) == 0;
            if (check)
                check = 0;
            else
                if (numb.b == 1)
                    check = 1;
                else
                    check = 2;
        }
        else
            check = -1;
        return check;
    }
}