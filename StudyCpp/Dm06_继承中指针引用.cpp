//#include <iostream>
//
//using namespace std;
//
//class Test1
//{
//public:
//	void printWord()
//	{
//		cout << "�����϶�" << endl;
//	}
//};
//
//class Test2 : public Test1
//{
//public:
//	void printWord()
//	{
//		cout << "���Ƕ���" << endl;
//	}
//};
//
//int main()
//{
//	Test1 t1;       // ������д���෽��
//	Test2 t2;
//	//t1.printWord();
//	//t2.printWord();
//
//	Test1 *p1;		// ���������������
//	p1 = &t2;
//	p1->printWord(); // ���õķ����Ǹ���ģ�������
//	(*p1).printWord();
//	cout << p1 << endl;
//	cout << &t2 << endl;
//
//	Test2 *p2;
//	//p2 = &t1;     // �������벻�ɸ�������
//	p2 = &t2;       // ��������������������ĺ���
//	p2->printWord(); 
//
//	Test1 &i = t2;  // �������ø�������
//	i.printWord();  // ���õķ������Ǹ���ģ�������
//
//	Test1 t3 = t2;  // ����ʵ��������
//	t3.printWord(); // ���õķ������Ǹ���ģ�������
//
//
//	system("pause");
//}