#include <iostream>

using namespace std;

int main()
{
	// 1 ����׷�ӵı�����ʼλ���Ǳ�����С��������
	// 2 ����ܴ�С����������������
	struct stu  {
		int a; // 0-3
		double d; // 8-15
		char c[9]; // 16-24
		int b; // 28-31
	}s1;
	cout << sizeof(s1) << endl;


	system("pause");
	return 0;
}