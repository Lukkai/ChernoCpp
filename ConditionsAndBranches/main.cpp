#include <iostream>
#include "Log.h"

int main()
{

	int x = 6;
	//bool comparisonResult = x == 5; //jesli x nie jest 5 to pomija if, bo if(0) nie wchodzi w cialo (0 oznacza false) i idzie dalej
	//kazda inna cyfra niz 0 oznacza true, wiec jesli x jest rozne od 0 to wykona sie funkcja
	if(x) //if(x == 5) //if(comparisonResult)	/*nie trzeb pisac if (comparisonResult == true) bo comparisonResult sam w sobie												jest typu bool, czyli	przyjmuje true/false, a wejscie do petli odbywa sie tylko											wtedy kiedy mam wartosc true, wiec true==true nie ma sensu*/
	//{
		Log("Hello World!");	/*nie musze tutaj tworzyc ciala z bracketow bo mam instrukcje jednowiersozwa, wystarczy srednik bez						bracketow*/
	//}
	std::cin.get();
}