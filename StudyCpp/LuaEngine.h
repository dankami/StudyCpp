#pragma once
#ifndef __LuaAndCpp__LuaEngine__
#define __LuaAndCpp__LuaEngine__

#include <stdio.h>
#include <iostream>
#include "lua/lua.hpp"

class LuaEngine {

public:

	~LuaEngine();

	static LuaEngine* getInstance();

	static void destroyInstance();

private:

	LuaEngine() :m_pLuaState(NULL) {};

	void init();

	std::string getFilePath(std::string fileName);

	lua_State* m_pLuaState;
};

#endif /* defined(__LuaAndCpp__LuaEngine__) */