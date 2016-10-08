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
//	// 手动修改 拷贝构造函数
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


// ------ 构造函数使用 ------
//int main()
//{
//  MyClass c; //默认构造函数
//	cout << "hello" << endl;
//	MyClass c1 = (4, 3);
//	// 1. 逗号运算符返回最后一个值，这里（4, 3）返回3
//	// 2. 等号增强,这里相当于调用一个值的构造方法 MyClass(3)
//
//	MyClass c2;  // 这里默认调用MyClass()
//	MyClass c3();  // 没有调用构造函数
//
//	MyClass c4 = MyClass(3) // 生成匿名对象;
//	system("pause");
//}

// ----- 拷贝构造函数 ----------
//int main()
//{
//	MyClass c1;
//	cout << "c1 值" << endl;
//	c1.p();
//	cout << "c1 改值" << endl;
//	c1.setA(11);
//	c1.p();
//
//	MyClass c2 = c1;  // 默认调用 拷贝构造函数
//
//	cout << "MyClass c2 = c1; c1给c2赋值初使化 c2 值" << endl;
//	c2.p();
//	cout << "c2 改值" << endl;
//	c2.setA(12);
//	c2.p();
//	cout << "c1 值不受影响，为两个变量" << endl;
//	c1.p();
//
//	MyClass c3;   
//	c3 = c2;   // 把 c3成员变量的值 赋给了 c2成员变量
//	cout << "c3 = c2; 只是赋值" << endl;
//	c3.p();
//	cout << "c3 改值" << endl;
//	c3.setA(13);
//	c3.p();
//	cout << "c2 值" << endl;
//	c2.p();
//
//	system("pause");
//}


// ---- 构造函数初使化列表 ----
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
//	Test2(int a , int b , int c ) : t1(c)   // 调用Test1(int a)构造方法
//	{
//		this->a = a;
//		this->b = b;
//	}
//	Test2(int a, int b) // 默认调用Test1()构造方法
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