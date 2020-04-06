#include<iostream>
//inheritance - classes depending on other classes' as parents. it allows us to have a hierarhy of classes
//its to extend an existing class and provide new features to subclasses

class Entity
{
public:
	float X, Y;

	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}
};

class Player : public Entity	//player inherits entity parts and adds few more attributes. player can be passed as an entity parameter when we use entities attributes
{								//casue of that player class is also an entity class
public:
	const char* Name;

	void PrintName()
	{
		std::cout << Name << std::endl;
	}
};



int main(void)
{
	Player player;
	player.Move(5,5);
	player.X = 2;

	std::cin.get();
}