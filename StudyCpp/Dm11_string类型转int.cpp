#include<iostream>
#include<sstream>
using namespace std;

//模板函数：将string类型变量转换为常用的数值类型（此方法具有普遍适用性）  
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