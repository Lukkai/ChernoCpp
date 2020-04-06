#include <iostream>

/*destructor - evil twin of constructor. it deletes the constructor*/
#include <iostream>

class Entity
{
public:
	float X, Y;

	Entity()  //we can initialize an object using a constructor with parameters we set or without 'em
	{
		X = 0.0f;
		Y = 0.0f;
		std::cout << "Created Entity!" << std::endl;
	}

	Entity(float x, float y)
	{
		X = x;
		Y = y;
	}
	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}

	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
};

class Log
{
	/*private:
		Log() {}*/ //if defined a constructor by us in private field we get an error cause i wont be able to access the constructor
public:
	//Log() = delete; //if i dont want to have a default constructor made by compiler
	static void Write()
	{

	}
};

void Function()
{
	Entity e;
	e.Print();
}

int main(void)
{
	Function();
	std::cin.get();
}