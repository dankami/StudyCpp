//#include <iostream>
//
//using namespace std;
//
//class Test1
//{
//public:
//	void virtual printWord()   // 加了virtual 实现多态
//	{
//		cout << "Test1" << endl;
//	}
//};
//
//class Test2 : public Test1
//{
//	void printWord()          // 父类加了虚拟, 继承默认也是变成虚拟函数
//	{
//		cout << "Test2" << endl;
//	}
//};
//
//class Test3 :public Test2
//{
//	void printWord()
//	{
//		cout << "Test3" << endl;
//	}
//};
//
//int main()
//{
//	Test2 t2;
//	Test1 *p = &t2;
//	p->printWord();   //这里终于调用子类的方法了
//
//	Test3 t3;
//	Test1 *p3 = &t3;
//	p3->printWord();  //这里终于调用子类的方法了
//
//	// 获取vptr指针
//	int *vptr = NULL;
//	memcpy(&vptr, p, 4);
//	cout << "vptr = " << vptr << endl;
//	typedef void(*pFunc) ();
//	pFunc pf = (pFunc)*vptr;
//	pf();
//
//	t3.Test1::printWord();   // 子类调用父类方法
//
//	system("pause");
//}