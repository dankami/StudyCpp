//#include <iostream>
//#include <functional> // 要使用function类型必须引入
//using namespace std;
//
//class Test
//{
//private:
//public:
//	void doTest(function<void(int)> handler_func){ // Lambda的类型其实是function
//		cout << "doTest" << endl;
//		handler_func(6); // 执行回调函数
//	}
//};
//
//int main()
//{
//	// 创建闭包函数
//	auto func01 = [](int i){
//		cout << "i = " << i << endl;
//	};
//	Test t1;
//	t1.doTest(func01); // 将闭包函数传入Test类，让其回调
//
//	system("pause");
//	return 0;
//}