//#include <iostream>
//
//using namespace std;
//
//class Test1
//{
//private:            // ���������⣬����(������)����
//	int a;
//protected:			// �������������
//	int b;
//public:
//	int c;
//};
//
//class Test2: public Test1    // public�̳в��ı��Ա�����ķ���Ȩ
//{
//public:
//	void doVar()
//	{
//		//a = 1;  // �������ڷ���
//		b = 2;
//		c = 3;
//	}
//
//};
//
//class Test3 : protected Test1   // protected�̳иı��Ա�����ķ���ȨΪ protected����
//{
//public:
//	void doVar()
//	{
//		//a = 1;  // �������ڷ���
//		b = 2;
//		c = 3;
//	}
//};
//
//class Test4 : private Test1   // private�̳иı��Ա�����ķ���ȨΪ private
//{
//public:
//	void doVar()
//	{
//		//a = 1;  // �������ڷ���
//		b = 2;
//		c = 3;
//	}
//};
//
//class Test5 : public Test4    // ���Խ�Ȩ
//{
//	void doVar()
//	{
//		//a = 1;  // �������ڷ���
//		//b = 2;  // �������ڷ���
//		//c = 3;  // �������ڷ���
//	}
//};
//
//int main()
//{
//	Test1 t1;
//	//t1.a = 1;    // private �����������
//	//t1.b = 2;    // protected �������������
//	t1.c = 3;
//}