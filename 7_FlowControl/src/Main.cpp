#include <iostream>
#include "Log.h"

int main(void)
{

	for (int i = 0; i < 5; i++)
	{
		/*if ((i + 1) % 2 == 0)
			break;*/				//wylamuje sie z petli

		/*if ((i + 1) % 2 == 0)
			return 0;*/				//konczy wykonywanie programu/funkcji, zwraca podana wartosc (w tym przypadku 0)
		if (i % 2 == 0)
			continue;			//jesli i jest parzyste, to pomin iteracje i idz do nast iteracji
		Log("Hello World!");
		std::cout << i << std::endl;
	}

		std::cin.get();
}