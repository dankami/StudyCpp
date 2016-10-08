//#include<iostream>
//#include "string.h"
//using namespace std;
//
//int main()
//{
//	char a = 'a';  // char只能接收一个字符，而且要用单引号。
//	char a1 = 'a';
//	if (a == a1)  // 相等
//	{
//		cout << "字符相等" << endl;
//	}
//
//	char s1[] = "abc";
//	char s2[] = "abc";
//	char* p1 = s1;
//	if (s1 == s2)  // 不相等,比的是地址
//	{
//		cout << "字符串相等" << endl;
//	}
//	else
//	{
//		cout << "字符串不相等" << endl;
//		cout << "&s1 = " << &s1 << endl;
//		cout << "&s2 = " << &s2 << endl;
//	}
//	if (p1 == s1) //相等，比的是地址
//	{
//		cout << "指针跟字符串地址相等" << endl;
//	}
//
//	// 小测指针与数组描述字符串，其实是一致的，都是指一个地址
//	cout << "*(p+1) = " << *(p1 + 1) << endl;
//
//	// 在C语言中比较字符串用strcmp
//	if (strcmp(s1, s2) == 0 )
//	{
//		printf("%s is same as %s. \n", s1, s2);
//	}
//		
//	// 在C++语言中果断用stl里面的String了
//	string t1 = "abc";
//	string t2 = "abc";
//	if (t1 == t2)  //相等的，运算符已经被string类型重载了
//	{
//		cout << "t1 == t2" << endl;
//	}
//
//	system("pause");
//	return 0;
//}