#include<iostream>
#include<sstream>
using namespace std;

//ģ�庯������string���ͱ���ת��Ϊ���õ���ֵ���ͣ��˷��������ձ������ԣ�  
template <class Type>
Type stringToNum(const string& str)
{
	istringstream iss(str);
	Type num;
	iss >> num;
	return num;
}

int main()
{
	string a = "123";
	int b = stringToNum<int>(a);
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}