#include <iostream>

// ����һ���꺯��
#define Log(num) cout << num <<endl

#define MyPrint(str, ...) printf(str, ##__VA_ARGS__)
// ##�����ж����ӣ���������ǿվͲ�����

using namespace std;



int main()
{
	// ���鴫�ݵ�ַ
	int a[] = { 1,3,4 };
	Log(a);

	printf("�����ˣ�%s, %d, %d\n", "zz", 1, 3);
	printf("����%s\n");
	MyPrint("�����ˣ�%s, %d, %d\n", "111", 1, 3);
	MyPrint("����");

	return 0;
}