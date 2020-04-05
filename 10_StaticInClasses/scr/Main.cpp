#include <iostream>

/*tworzac zmienne static w klasie tak naprawde w kazdej instancji wtedy posiadam t¹ sama jedna zmienna w ka¿dej z nich. 
jesli w jednej klasie zmienie ta zmienna na inna wartosc to wszystkie klasy równie¿ bêd¹ mia³y inna wartosc tej zmiennej*/

/*using struct i get inside members public by default.
  struct is ment more for simple data collections*/
/*using class i have private members by default
  class is used for creating objects with specifical behaviours as we've declared them to be in their bodies*/

struct Entity
{
	static int x, y; //being no longer normal but static, x & y are no longer struct members, but they are somehow like in a namespace. they're also pointing to the same memory, so they have in every entity the same values

	void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}
	/*can also use static void Print(),
	but then its better to use in main Entity::Print, so the code is clearer*/
};

int Entity::x; //this way we define those variables
int Entity::y;

int main()
{
	/*Entity e;
	e.x = 2;
	e.y = 3;*/

	//after being static its better to refere those entity members this way
	Entity e;
	Entity::x = 2;
	Entity::y = 3;

	Entity e1;
	Entity::x = 5;
	Entity::y = 8;


	e.Print();
	e1.Print();
	std::cin.get();
}