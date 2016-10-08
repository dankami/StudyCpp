//#include <iostream>
//
//using namespace std;
//
//class Test1
//{
//public:
//	void printWord()
//	{
//		cout << "我是老豆" << endl;
//	}
//};
//
//class Test2 : public Test1
//{
//public:
//	void printWord()
//	{
//		cout << "我是儿子" << endl;
//	}
//};
//
//int main()
//{
//	Test1 t1;       // 子类重写父类方法
//	Test2 t2;
//	//t1.printWord();
//	//t2.printWord();
//
//	Test1 *p1;		// 父类子针给子类用
//	p1 = &t2;
//	p1->printWord(); // 调用的方法是父类的！！！！
//	(*p1).printWord();
//	cout << p1 << endl;
//	cout << &t2 << endl;
//
//	Test2 *p2;
//	//p2 = &t1;     // 子类子针不可给父类用
//	p2 = &t2;       // 这样可以正常调用子类的函数
//	p2->printWord(); 
//
//	Test1 &i = t2;  // 父类引用给子类用
//	i.printWord();  // 调用的方法还是父类的！！！！
//
//	Test1 t3 = t2;  // 子类实例化父类
//	t3.printWord(); // 调用的方法还是父类的！！！！
//
//
//	system("pause");
//}