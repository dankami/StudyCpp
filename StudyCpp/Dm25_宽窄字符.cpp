#include <iostream>
#include <deque>

using namespace std;


int main()
{
	char a[] = "��������ŵ�";
	cout << a << endl;
	cout << sizeof(a) << endl;

	wchar_t b[] = L"��������ŵ�";
	wcout << b << endl;
	cout << sizeof(b) << endl;

	char c[] = "123456";
	cout << c << endl;
	cout << sizeof(c) << endl;

	wchar_t d[] = L"123456";
	wcout << d << endl;
	cout << sizeof(d) << endl;
	
	return 0;
}