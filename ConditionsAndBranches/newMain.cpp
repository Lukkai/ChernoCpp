#include <iostream>
#include "Log.h"

int main()
{
	const char* ptr = "Hello";
	if (ptr)
		Log(ptr);		//jesli moj wskaznik wskazuje na jakis element i nie jest null to wykunuje instrukcje
	
	std::cin.get();
}