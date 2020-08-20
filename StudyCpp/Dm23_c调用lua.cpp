//#include <iostream>
//#include "lua/lua.hpp"
//using namespace std;
//
//int main(int argc, const char * argv[]) 
//{
//	//  初始化
//	lua_State *L = luaL_newstate();
//	if (L == nullptr)
//	{
//		return -1;
//	}
//	// 加载相关库文件
//	luaL_openlibs(L);
//
//	// 加载lua文件
//	int bRet = luaL_loadfile(L, "/scripts/myfunc.lua");
//	if (bRet == -1)
//	{
//		cout << "load test.lua file failed" << endl;
//		return -1;
//	}
//
//	// 执行lua文件
//	bRet = lua_pcall(L, 0, 0, 0);
//	if (bRet == -1)
//	{
//		cout << "call test.lua file failed" << endl;
//		return -1;
//	}
//
//	// 获取值
//	lua_getglobal(L, "mystr");
//	std::string str = lua_tostring(L, -1);
//	cout << "str=" << str.c_str() << endl;
//
//	// 获取表中数据
//	lua_getglobal(L, "my_table");
//	lua_getfield(L, -1, "name");
//	str = lua_tostring(L, -1);
//	cout << "table:name=" << str.c_str() << endl;
//
//	// 获取表中数据
//	lua_getglobal(L, "my_table");
//	lua_getfield(L, -1, "id");
//	int nNumber = lua_tonumber(L, -1);
//	cout << "table:id=" << nNumber << endl;
//
//	// 获取并调用函数
//	lua_getglobal(L, "a_add_b");
//	lua_pushnumber(L, 10);
//	lua_pushnumber(L, 20);
//	int iRet = lua_pcall(L, 2, 1, 0);
//	if (iRet == -1)
//	{
//		const char* pErrorMsg = lua_tostring(L, -1);
//		cout << pErrorMsg << endl;
//		lua_close(L);
//		return -1;
//	}
//
//	// 获取结果
//	if (lua_isnumber(L, -1))
//	{
//		double fValue = lua_tonumber(L, -1);
//		cout << "a + b = " << fValue << endl;
//	}
//
//	lua_close(L);
//	// waiting for console
//	cin.get();
//	return 0;
//}