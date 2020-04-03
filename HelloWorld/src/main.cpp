#include <iostream>
#include "Log.h"
#include "Math.h"

int main()
{
	InitLog();
	Log("Hello World!");
	std::cout << Multiply(5, 3) << std::endl;
	std::cin.get();
}