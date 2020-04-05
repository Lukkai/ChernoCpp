#include <iostream>

//int s_Variable = 10;  //jesli w static.cpp mam zmienna static o takiej samej nazwie, to ona nie ma wplywu na wartosc tej zmiennej w tym pliku. 
//int s_Variable = 10; //jesli nie bylaby static w innym pliku projektu to bedzie blad linkowania, bo pojawia sie dwie takie same zmienne w projekcie ktore sie na siebie nakladaja i linker sie gubi jaka zmienna brac pod uwage
//extern int s_Variable;  //jesli nie jest przypisane w moim pliku, to bedzie szukac w innym pliku projektu tej zmiennej i jej wartosci

extern void Function(); //jesli w static.cpp mam taka sama funkcje ktora nie jest static to mam blad linkowania
//kiedy mowie ze funkcja jest extern to nie moge wtedy w tym pliku ja definiowac, nie moge nic jej przypisac

/* void Function()//jesli nie mowie ze funckja znajduje sie w innym pliku, a posiadam taka sama funkcjew tym pliku, ktora nie jest static, to bedzie blad linkowania
{

} */

int main(void)
{

//	std::cout << s_Variable << std::endl;
	Function(); //jesli extern a w innym pliku nie jest static to wykona funkcje z tamtego modulu
	std::cin.get();
}