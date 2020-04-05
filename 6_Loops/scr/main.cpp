#include <iostream>
#include "Log.h"

int main(void)
{
	
	for (int i = 0; i < 5; i++)
	{
		Log("Hello World!");
	}

	Log("===================================");
	
	int i = 0;
	while (i < 5)
	{
		Log("Hello World!");
		i++;
	}

	do
	{
							/*do while wykona sie przynajmniej jeden raz nawet kiedy warunek nie jest spelniony w przeciwienstwie do poprzednich petli*/
		Log("Hurray! It works at least once!");
	} while (i < 5);

	std::cin.get();
}