//#include <iostream>
//
//using namespace std;
//
//class Test1
//{
//public:
//	void virtual printWord()   // ����virtual ʵ�ֶ�̬
//	{
//		cout << "Test1" << endl;
//	}
//};
//
//class Test2 : public Test1
//{
//	void printWord()          // �����������, �̳�Ĭ��Ҳ�Ǳ�����⺯��
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
//	p->printWord();   //�������ڵ�������ķ�����
//
//	Test3 t3;
//	Test1 *p3 = &t3;
//	p3->printWord();  //�������ڵ�������ķ�����
//
//	// ��ȡvptrָ��
//	int *vptr = NULL;
//	memcpy(&vptr, p, 4);
//	cout << "vptr = " << vptr << endl;
//	typedef void(*pFunc) ();
//	pFunc pf = (pFunc)*vptr;
//	pf();
//
//	t3.Test1::printWord();   // ������ø��෽��
//
//	system("pause");
//}