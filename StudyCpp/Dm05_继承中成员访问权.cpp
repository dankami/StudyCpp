//#include <iostream>
//
//using namespace std;
//
//class Test1
//{
//private:            // 不可在类外，类内(子类中)访问
//	int a;
//protected:			// 不可在类外访问
//	int b;
//public:
//	int c;
//};
//
//class Test2: public Test1    // public继承不改变成员变量的访问权
//{
//public:
//	void doVar()
//	{
//		//a = 1;  // 不可类内访问
//		b = 2;
//		c = 3;
//	}
//
//};
//
//class Test3 : protected Test1   // protected继承改变成员变量的访问权为 protected以下
//{
//public:
//	void doVar()
//	{
//		//a = 1;  // 不可类内访问
//		b = 2;
//		c = 3;
//	}
//};
//
//class Test4 : private Test1   // private继承改变成员变量的访问权为 private
//{
//public:
//	void doVar()
//	{
//		//a = 1;  // 不可类内访问
//		b = 2;
//		c = 3;
//	}
//};
//
//class Test5 : public Test4    // 测试降权
//{
//	void doVar()
//	{
//		//a = 1;  // 不可类内访问
//		//b = 2;  // 不可类内访问
//		//c = 3;  // 不可类内访问
//	}
//};
//
//int main()
//{
//	Test1 t1;
//	//t1.a = 1;    // private 不可类外访问
//	//t1.b = 2;    // protected 不可在类外访问
//	t1.c = 3;
//}