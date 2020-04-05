#include <iostream>

/*tworzac zmienne static w klasie tak naprawde w kazdej instancji wtedy posiadam t¹ sama jedna zmienna w ka¿dej z nich. 
jesli w jednej klasie zmienie ta zmienna na inna wartosc to wszystkie klasy równie¿ bêd¹ mia³y inna wartosc tej zmiennej*/

/*using struct i get inside members public by default.
  struct is ment more for simple data collections*/
/*using class i have private members by default
  class is used for creating objects with specifical behaviours as we've declared them to be in their bodies*/


/*static makes variables and functions like they wouldnt belong to a class.
they seem to work then as a normal nonstatic function whose i have to pass object as a parameter to recognize to what it has to refer
if i dont, they will lose its objects and wont recognize elements which i refer to*/

struct Entity
{
	/*static int x, y; //being no longer normal but static, x & y are no longer struct members, but they are somehow like in a namespace. they're also pointing to the same memory, so they have in every entity the same values*/
	
	static int x, y;


	/*void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}*/
	/*can also use static void Print(),
	but then its better to use in main Entity::Print, so the code is clearer*/
	/*static void Print()							// a static method doesnt have a class, so its the same as i would've written it outside the structure and deleted passing the object as a parameter
											//thats why it doesnt have access to objects hidden  parameters
	{
		std::cout << x << ", " << y << std::endl;
	}*/
	static void Print(Entity e)					//this one will work but id have to print out it in main in different way (like e1.Print(e1); or Entity::Print(e);)
	{
		std::cout << e.x << ", " << e.y << std::endl;
	}
};


/*static void Print() //this time we dont pass the entity as a parameter here
{
	std::cout << x << ", " << y << std::endl;  //it doesnt recognize x and y cause they are inside the structs scope, so it doesnt see them
} */

/*static void Print(Entity e)  //class method that is non static looks like this - a static or normal function with an object passed as a parameter
								//without passed entity it wont recognize x and y, cause they will be inside the struct which has its own scope
{
	std::cout << e.x << ", " << e.y << std::endl;
}
*/

int Entity::x; //this way we define those variables where they are static. we have to define them somewhere
int Entity::y; //after they're defined the linker can link them to appropriate variables

int main()
{
	/*Entity e;
	e.x = 2;
	e.y = 3;*/
	
	/* //after x and y being static its better to refere those entity members this way
	Entity e;
	Entity::x = 2;
	Entity::y = 3;

	Entity e1;
	Entity::x = 5;
	Entity::y = 8;
	*/
	
	Entity e;
	e.x = 2;
	e.y = 3;

	Entity e1;
	e1.x = 5;
	e1.y = 8;

	//e.Print();    //before static print
	//e1.Print();
	Entity::Print(e);	//print being static i have to pass the object as a parameter to print, so i know where to refer to its values
	Entity::Print(e1);
	e.Print(e);
	e1.Print(e1);
	
	std::cin.get();
}