#include <iostream>


int main()
{
	char a = 'A';
	unsigned int variable = 8; //pomija miejsce w pamieci na 1 bit dla znaku i mamy wiecej pamieci na dodatnie liczby. praktycznie wieksza to dodatnie liczby o 2 razy. np -256 do 255 a unsigned 0 do 512
	std::cout << variable << std::endl;
	variable = 20;
	std::cout << variable << std::endl;
	std::cin.get();
}