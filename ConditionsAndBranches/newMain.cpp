#include <iostream>
#include "Log.h"

int main()
{
	const char* ptr = nullptr;
	if (ptr) // (ptr != nullptr) nie trzeba bo kiedy  jest nullptr to i tak nie wejdzie do srodka petli
		Log(ptr);		//jesli moj wskaznik wskazuje na jakis element i nie jest null to wykunuje instrukcje
	else if (ptr == "Hello")
		Log("Ptr says Hello!");
	else
		Log("Ptr is null!");
	
	std::cin.get();
}