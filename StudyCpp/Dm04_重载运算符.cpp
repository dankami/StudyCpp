//#include <iostream>
//
//using namespace std;
//
//class Test
//{
//private:
//	int a;
//	int b;
//	friend Test operator+(Test &t);
//	friend Test operator++(Test &t);
//	friend Test operator++(Test &t, int);
//public:
//	Test(int a = 0, int b = 0)
//	{
//		this->a = a;
//		this->b = b;
//	}
//
//	void printCom()
//	{
//		cout << "a = " << this->a << endl;
//		cout << "b = " << this->b << endl;
//	}
//
//	// ��Ա�������� +
//	Test operator+(Test &t)
//	{
//		Test tmp(this->a + t.a, this->b + t.b);
//		return tmp;
//	}
//
//	
//};
//
//// ȫ�ֺ������� ++ (ǰ��)
//Test operator++(Test &t)
//{
//	t.a++;
//	t.b++;
//	return t;
//}
//
//// ȫ�ֺ������� ++ (����)
//Test operator++(Test &t, int)
//{
//	t.a++;
//	t.b++;
//	return t;
//}
//
//int main()
//{
//	Test c1(1, 1), c2(2, 2);
//	Test c3 = c1 + c2;
//	++c3;
//	c3++;
//	c3.printCom();
//
//	system("pause");
//}