#include <iostream>
#include "LuaEngine.h"

int main(int argc, const char * argv[]) {
	// insert code here...
	std::cout << "Hello, World!\n";

	LuaEngine::getInstance();

	LuaEngine::destroyInstance();

	return 0;
}