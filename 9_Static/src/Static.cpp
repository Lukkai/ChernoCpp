#include<iostream>
//static int s_Variable = 5; //static odnosi sie tylko do zasiegu jednego pliku, a nie globalnie projektu
							//w main.cpp majac zdefiniowany s_Variable = 10, to nie bedzie bledu jesli s_Variable tu jest static
//int s_Variable = 5;						// jesli nie jest static a jedynie int, to bedzie blad kompilacji

//static int s_Variable = 5; //oglaszanie tej zmiennej jako static, to tak jakby robienie z niej zmiennej private w klasie, linker nie zobaczy tego elementu w tym pliku laczac pliki

/* void Function()  //jesli nie jest static to blad kompilacji przy tworzeniu projektu
{

} */

/* static void Function() //funkcja ta jest prywatna tylko dla tego pliku, reszta plikow go nie widzi
{

} */

void Function() // ale jesli nie jest static a glowny modul zaznacza ze podglada ta funkcje z zewnetrznego pliku (extern) to sie wykona
{
	std::cout << "dont look at me, i wanted some privacy!" << std::endl;
}


/*zmienne static s¹ zmiennymi/funkcjami prywatnymi w zasiegu takim w jakim go umiescimy. tj. jesli w pliku ogolnie to bedzie dostepny tylko dla jednego pliku. jesli w funkcji to tylko dla funckji*/