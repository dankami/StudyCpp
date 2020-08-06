#include "LuaEngine.h"

LuaEngine::~LuaEngine() {
	lua_close(m_pLuaState);
}

static LuaEngine* LuaEngine_instance = NULL;

LuaEngine* LuaEngine::getInstance() {
	if (LuaEngine_instance == NULL) {
		LuaEngine_instance = new LuaEngine();
		LuaEngine_instance->init();
	}
	return LuaEngine_instance;
}

void LuaEngine::destroyInstance() {
	if (LuaEngine_instance) {
		delete LuaEngine_instance;
		LuaEngine_instance = NULL;
	}
}

void LuaEngine::init() {
	m_pLuaState = luaL_newstate();
	luaL_openlibs(m_pLuaState);

	luaL_dofile(m_pLuaState, this->getFilePath("hello.lua").c_str());
	lua_pcall(m_pLuaState, 0, 0, 0);
}

std::string LuaEngine::getFilePath(std::string fileName) {
	return "/scripts/" + fileName;
}