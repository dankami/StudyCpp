//#include <iostream>
//
//using namespace std;
//
////---- - ��һ������------------
//int main()
//{
//	cout << "hello world !!" << endl;
//	system("pause");
//}
//
////--------C++ �� const �ļ�ǿ-------

//int main()
//{
//	const int a = 10;
//	int *p;
//	p = NULL;
//	p = (int *)&a;     //ǿתΪָ��
//	*p = 5;            //C���Դ˴����޸���a��ֵ������C++���ᣬ��Ϊa��ֵ�����ڷ��ű��*p�޸ĵ����ڴ�����ֵ
//	cout << "a = " << a << endl;
//	cout << "*p = " << *p << endl;
//
//	system("pause");
//}


//------------ ���õķ���֮�� ---------------

//struct Student
//{
//	int age;
//	int sex;
//};
//
//// ˼·��ͨ������stu1ָ���ָ�룬���޸�stu1��ָ��
//void getStudent(Student **p)   //��������ָ���ָ��,����p����һ���βΣ�����*p(��ָ��stu1��ָ��)���޸���ʵ���޸�stu1��ָ��
//{
//	Student *temp = NULL;
//	temp = (Student *)malloc(sizeof(Student));
//	temp->age = 10;
//	temp->sex = 1;
//	*p = temp;   //stu1��ָ�뱻��Ϊtemp
//}
//
//// ˼·�Ǵ���ָ������ã���������ֱ���޸�ָ��
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



// ---------- Ĭ�ϲ������� -------------

//void set(int a, int b, int c=3)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//
//// Ĭ�ϲ������������ұ���Ĭ�ϲ���
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


// --------- C++ �ַ����� ���� ---------------

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


// --- �������õĲ��� ----
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
//Test& doAdd(Test &t)  // �˴��������ã����Ǵ������Ĳ���
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
