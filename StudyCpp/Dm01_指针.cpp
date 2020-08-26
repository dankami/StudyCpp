//#include <iostream>
//
//using namespace std;
//
////---- - 第一个例子------------
//int main()
//{
//	cout << "hello world !!" << endl;
//	system("pause");
//}
//
////--------C++ 对 const 的加强-------

//int main()
//{
//	const int a = 10;
//	int *p;
//	p = NULL;
//	p = (int *)&a;     //强转为指针
//	*p = 5;            //C语言此处会修改了a的值，但是C++不会，因为a的值被放在符号表里，*p修改的是内存分配的值
//	cout << "a = " << a << endl;
//	cout << "*p = " << *p << endl;
//
//	system("pause");
//}


//------------ 引用的方便之处 ---------------

//struct Student
//{
//	int age;
//	int sex;
//};
//
//// 思路是通过传入stu1指针的指针，来修改stu1的指针
//void getStudent(Student **p)   //传进来是指针的指针,所以p还是一个形参，但是*p(是指向stu1的指针)的修改其实是修改stu1的指针
//{
//	Student *temp = NULL;
//	temp = (Student *)malloc(sizeof(Student));
//	temp->age = 10;
//	temp->sex = 1;
//	*p = temp;   //stu1的指针被改为temp
//}
//
//// 思路是传入指针的引用，这样可以直接修改指针
//void getStudent2(Student* &p)
//{
//	p = (Student*)malloc(sizeof(Student));
//	p->age = 20;
//	p->sex = 0;
//}
//
//int main()
//{
//	Student *stu1 = NULL;
//	//Student stu1;
//	//getStudent(&stu1);
//	getStudent2(stu1);
//	cout << "stu1->age = " << stu1->age << endl;
//	cout << "stu1->sex = " << stu1->sex << endl;
//	system("pause");
//}



// ---------- 默认参数测试 -------------

//void set(int a, int b, int c=3)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//
//// 默认参数必须是最右边有默认参数
////void set2(int a = 1, int b)
////{
////
////}
//
//int main()
//{
//	set(1,1);
//	system("pause");
//
//	return 0;
//}


// --------- C++ 字符串的 测试 ---------------

//void changeChar(char* &p)
//{
//	p = "123456789";
//}
//
//int main()
//{
//	char str[90] = "sdlfjsldfjsdflk";
//	changeChar(&str);
//	cout << str << endl;
//
//	system("pause");
//	return 0;
//}


// --- 返回引用的测试 ----
//class Test
//{
//private:
//	int a;
//	int b;
//public:
//	Test(int a = 0, int b = 0)
//	{
//		this->a = a;
//		this->b = b;
//	}
//
//	void doAdd()
//	{
//		this->a++;
//		this->b++;
//	}
//
//	void printCom()
//	{
//		cout << "a = " << this->a << endl;
//		cout << "b = " << this->b << endl;
//	}
//};
//
//Test& doAdd(Test &t)  // 此处返回引用，就是传进来的参数
//{
//	t.doAdd();
//	return t;
//}
//
//int main()
//{
//	Test t1(1, 1);
//	doAdd(t1);
//	t1.printCom();
//	t1.doAdd();
//	t1.printCom();
//
//	system("pause");
//}
