#include <iostream>


int main()
{
	//char a = 'A';
	//unsigned int variable = 8; //pomija miejsce w pamieci na 1 bit dla znaku i mamy wiecej pamieci na dodatnie liczby. praktycznie wieksza to dodatnie liczby o 2 razy. np -256 do 255 a unsigned 0 do 512
	//std::cout << variable << std::endl;
	//variable = 20;
	//std::cout << variable << std::endl;

	float variable = 5.5f;  //dopiero gdy na koncu liczby dopiszemy f to mamy float, czyli pojedynczej precyzji zmiennoprzecinkowe 4 bajty w pamieci, a nie podwojnej precyzji 8 bajtow
	double var = 5.2;
	
	std::cout << variable << std::endl;
	std::cout << sizeof(variable) << " bytes - float" << std::endl;

	bool isvariable = false;
	std::cout << sizeof(bool) << " bytes - boolean" << std::endl;  //boolean to 1 bajt


	std::cin.get();
}