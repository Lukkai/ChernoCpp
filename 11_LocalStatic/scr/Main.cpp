#include <iostream>

/*lifetime of a viariable and scope of a varaible*/
/*a local static is a variable which has a lifetime of our whole program, however its scope is going to be only inside our meant body of a function/if statement/class/whatever we mean it to be in*/

//int i = 0;  //for Function() it doesnt matter in this example if its static or not

/*class Singleton		//creating a singleton class to use it statically
{
private:
	static Singleton* s_Instance;
public:
	Singleton& Get() { return *s_Instance; }

	void Hello() {}
};

Singleton* Singleton::s_Instance = nullptr; //i have to declare it using this method to have an actual instance of my object
											//Every variable declared as static inside a class must be declared on the translation unit as well
 */

/*	Singleton functionality is to create only one instance of my object, no more are allowed. its very useful when i have to track whats going on with my object, cause i dont need the same control functionality to be doubled when it does the same work for the same object. 
	We are operating without instances of our class. If you were to use the defined Singleton class, you would call the Get()-method of the class, but you would not create a new instance of that class. That is the reason, why the "static Singleton instance;" variable is static, and this is why the "static Singleton& Get()" function is static aswell, because we are not accessing the function with an instance of the class, but through the scope-operator of C++, which is "::", "Singleton::Get().Hello();"*/

	//another way of doing it statically is by reference
class Singleton		//creating a singleton class to use it staticly in an alternative way
{
public:
	static Singleton& Get() 
	{ 
		static Singleton Instance;		//if not static -> the variable would get destroyed as soon as the function ends so you would be returning a reference to an object that no								longer exist
										//if i didnt use static here, instance would be created only within scope of this function and then it would get destroyed and life ended
										// but by making it static we extend its life for practically forewer, so its value is accessible local, but is never destroyed like with no static attribute
		return Instance;				//if would be a huge problem cause we're no copying the instance but taking a reference
	}									

	void Hello() {}
};


void Function()
{
	//int i = 0;
	static int i = 0;	//if i make it static its very similar to int i being declared outside this function. 
						//outside it wont matter for this function if its static or not for now. if made an example, look at comment int i = 0 above at line 6
						//but "i" being outside the body of this function is a global variable and is accesible from anywhere so it can follow us to some major issues
						//static int i being inside of this function will affect its scope, so it will be only accessible within scope of this function. thus it wont be global
	i++;
	std::cout << i << std::endl;
}


int main(void)
{
	/*Function();
	//i = 10; //exemplary issue with i beibng accessible from anywhere //with i being static inside the function is only accessible inside this function. its not a global variable
	Function();
	Function();
	Function();
	Function();
	*/

	Singleton::Get().Hello();

	std::cin.get();
}