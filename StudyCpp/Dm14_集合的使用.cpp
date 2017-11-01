//#include <iostream>
//#include <map>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	map<int, string> m;
//	m[0] = "h1";
//	m[3] = "what";
//	m.insert(pair<int, string>(4, "love you"));
//
//	cout << m[0].c_str() << endl;
//	cout << m[3].c_str() << endl;
//	cout << m[4].c_str() << endl;
//	cout << m[2].c_str() << endl;   // 会产生一个新的元素，即m[2] = ""
//
//
//	cout << m.size() << endl;       // 4
//
//	// 迭代方法
//	for (map<int, string>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << it->first << ", " << it->second.c_str() << endl;
//	}
//
//	cout << "迭代 vector" << endl;
//	vector<int> v;
//	v.push_back(0);      
//	v.push_back(1);
//	v.push_back(2);
//	for (auto it = v.begin(); it != v.end(); it++)
//	{
//		cout << "*it = " << *it << endl;
//	}
//	
//	cout << "测试拷贝" << endl;
//	vector<int> v2 = v;
//	v2[2] = 3;
//	for (auto it = v.begin(); it != v.end(); it++)
//	{
//		cout << "*it = " << *it << endl;
//	}
//	for (auto it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << "*it = " << *it << endl;
//	}
//
//	cout << "追加一个集合的值" << endl;
//	vector<int> t1(3, 3);
//	vector<int> t2(6, 4);
//	t1.insert(t1.end(), t2.begin(), t2.end());
//
//	for (auto it = t1.begin(); it != t1.end(); it++){
//		cout << *it << endl;
//	}
//	
//	system("pause");
//	return 0;
//}