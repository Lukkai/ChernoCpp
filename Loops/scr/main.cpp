#include <iostream>
#include "Log.h"

int main(void)
{
	int i = 0;
	bool condition = true;
	for (; condition;)
	{
		Log("Hello World!");
		i++;
		if (!(i < 5))
			condition = false;	//jesli i jest juz wieksze niz 5 to warunek petli nie jest spelniony
	}
	std::cin.get();
}