//#include<iostream>
//#include "string.h"
//using namespace std;
//
//int main()
//{
//	char a = 'a';  // charֻ�ܽ���һ���ַ�������Ҫ�õ����š�
//	char a1 = 'a';
//	if (a == a1)  // ���
//	{
//		cout << "�ַ����" << endl;
//	}
//
//	char s1[] = "abc";
//	char s2[] = "abc";
//	char* p1 = s1;
//	if (s1 == s2)  // �����,�ȵ��ǵ�ַ
//	{
//		cout << "�ַ������" << endl;
//	}
//	else
//	{
//		cout << "�ַ��������" << endl;
//		cout << "&s1 = " << &s1 << endl;
//		cout << "&s2 = " << &s2 << endl;
//	}
//	if (p1 == s1) //��ȣ��ȵ��ǵ�ַ
//	{
//		cout << "ָ����ַ�����ַ���" << endl;
//	}
//
//	// С��ָ�������������ַ�������ʵ��һ�µģ�����ָһ����ַ
//	cout << "*(p+1) = " << *(p1 + 1) << endl;
//
//	// ��C�����бȽ��ַ�����strcmp
//	if (strcmp(s1, s2) == 0 )
//	{
//		printf("%s is same as %s. \n", s1, s2);
//	}
//		
//	// ��C++�����й�����stl�����String��
//	string t1 = "abc";
//	string t2 = "abc";
//	if (t1 == t2)  //��ȵģ�������Ѿ���string����������
//	{
//		cout << "t1 == t2" << endl;
//	}
//
//	system("pause");
//	return 0;
//}