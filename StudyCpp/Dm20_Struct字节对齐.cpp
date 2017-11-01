#include <iostream>

using namespace std;

int main()
{
	// 1 后面追加的变量开始位置是变量大小的整数倍
	// 2 最后总大小是最大变量的整数倍
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