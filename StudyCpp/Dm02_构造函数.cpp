#include <iostream>

using namespace std;


//class MyClass
//{
//private:
//	int m_a;
//	int m_b;
//public:
//	MyClass()
//	{
//		m_a = 3;
//		m_b = 3;
//	}
//	~MyClass()
//	{
//
//	}
//
//	MyClass(int a)
//	{
//		m_a = a;
//		m_b = a;
//	}
//
//	MyClass(int a, int b)
//	{
//		m_a = a;
//		m_b = b;
//	}
//
//	// �ֶ��޸� �������캯��
//	MyClass(const MyClass &c)
//	{
//		m_a = c.m_a;
//		m_b = c.m_b;
//	}
//
//	void setA(int a)
//	{
//		m_a = a;
//	}
//	void setB(int b)
//	{
//		m_b = b;
//	}
//
//	void p()
//	{
//		cout << "m_a = " << m_a << endl;
//		cout << "m_b = " << m_b << endl;
//	}
//};


// ------ ���캯��ʹ�� ------
//int main()
//{
//  MyClass c; //Ĭ�Ϲ��캯��
//	cout << "hello" << endl;
//	MyClass c1 = (4, 3);
//	// 1. ����������������һ��ֵ�����4, 3������3
//	// 2. �Ⱥ���ǿ,�����൱�ڵ���һ��ֵ�Ĺ��췽�� MyClass(3)
//
//	MyClass c2;  // ����Ĭ�ϵ���MyClass()
//	MyClass c3();  // û�е��ù��캯��
//
//	MyClass c4 = MyClass(3) // ������������;
//	system("pause");
//}

// ----- �������캯�� ----------
//int main()
//{
//	MyClass c1;
//	cout << "c1 ֵ" << endl;
//	c1.p();
//	cout << "c1 ��ֵ" << endl;
//	c1.setA(11);
//	c1.p();
//
//	MyClass c2 = c1;  // Ĭ�ϵ��� �������캯��
//
//	cout << "MyClass c2 = c1; c1��c2��ֵ��ʹ�� c2 ֵ" << endl;
//	c2.p();
//	cout << "c2 ��ֵ" << endl;
//	c2.setA(12);
//	c2.p();
//	cout << "c1 ֵ����Ӱ�죬Ϊ��������" << endl;
//	c1.p();
//
//	MyClass c3;   
//	c3 = c2;   // �� c3��Ա������ֵ ������ c2��Ա����
//	cout << "c3 = c2; ֻ�Ǹ�ֵ" << endl;
//	c3.p();
//	cout << "c3 ��ֵ" << endl;
//	c3.setA(13);
//	c3.p();
//	cout << "c2 ֵ" << endl;
//	c2.p();
//
//	system("pause");
//}


// ---- ���캯����ʹ���б� ----
//class Test1
//{
//public:
//	Test1()
//	{
//
//	}
//	Test1(int a)
//	{
//		this->a = a;
//	}
//	~Test1()
//	{
//
//	}
//
//private:
//	int a;
//};
//
//class Test2
//{
//private:
//	int a;
//	int b;
//	Test1 t1;
//public:
//	Test2(int a , int b , int c ) : t1(c)   // ����Test1(int a)���췽��
//	{
//		this->a = a;
//		this->b = b;
//	}
//	Test2(int a, int b) // Ĭ�ϵ���Test1()���췽��
//	{
//
//	}
//};
//
//int main()
//{
//	Test2 t2(1, 1);
//
//	system("pause");
//}