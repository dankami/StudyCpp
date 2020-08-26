#include <iostream>

// 定义一个宏函数
#define Log(num) cout << num <<endl

#define MyPrint(str, ...) printf(str, ##__VA_ARGS__)
// ##可以判断连接，如果参数是空就不连接

using namespace std;



int main()
{
	// 数组传递地址
	int a[] = { 1,3,4 };
	Log(a);

	printf("我来了，%s, %d, %d\n", "zz", 1, 3);
	printf("走起！%s\n");
	MyPrint("我来了，%s, %d, %d\n", "111", 1, 3);
	MyPrint("走起！");

	return 0;
}