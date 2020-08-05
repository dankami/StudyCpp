// 函数指针
//

#include <iostream>

using namespace std;

int max(int x, int y)
{
	return (x > y ? x : y);
}

int main()
{
	// 第一种方式
	int(*ptr)(int, int);
	int a, b, c;
	ptr = max;
	cin >> a >> b;

	c = (*ptr)(a, b);
	printf("a=%d, b=%d, max=%d\n", a, b, c);

	//第二种方式
	typedef int(*funcp)(int, int);
	funcp pfun = max;
	c = pfun(a, b);
	printf("a=%d, b=%d, max=%d\n", a, b, c);

	return 0;
}


