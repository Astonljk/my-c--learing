#include <iostream>
#include "head.h"

void InitLog()
{
	Log("Initializing Log");
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}