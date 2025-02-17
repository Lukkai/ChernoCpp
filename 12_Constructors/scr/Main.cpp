#include <iostream>

class Entity
{
public:
	float X, Y;

	Entity()  //we can initialize an object using a constructor with parameters we set or without 'em
	{
		X = 0.0f;
		Y = 0.0f;
	}

	Entity(float x, float y)
	{
		X = x;
		Y = y;
	}
	/*
	void Init()   //init method to set wanted values to not have random garbage values 
	{
		X = 0.0f;
		Y = 0.0f;
	}
	*/
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

int main(void)
{
	Log::Write();
	//Log l;

	Entity e; //non parametrical constructor with 0 initiated
	//e.Init();
	std::cout << e.X << std::endl;
	e.Print(); 
	
	Entity e1(10.0f, 5.0f); //parametrical constructor
	e1.Print();
	std::cin.get();
}