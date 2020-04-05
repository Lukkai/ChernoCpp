#include <iostream>

/*lifetime of a viariable and scope of a varaible*/
/*a local static is a variable which has a lifetime of our whole program, however its scope is going to be only inside our meant body of a function/if statement/class/whatever we mean it to be in*/

//int i = 0;  //for Function() it doesnt matter in this example if its static or not

void Function()
{
	//int i = 0;
	static int i = 0;	//if i make it static its very similar to int i being declared outside this function. 
						//outside it wont matter for this function if its static or not for now. if made an example, look at comment int i = 0 above at line 6
						//but "i" being outside the body of this function is a global variable and is accesible from anywhere so it can follow us to some major issues
						//static int i being inside of this function will affect its scope, so it will be accessible only within scope of this function. this way it wont be global
	i++;
	std::cout << i << std::endl;
}


int main(void)
{
	Function();
	//i = 10; //examplary issue with i beibng accessible from anywhere //with i being static inside the function is only accessible inside this function. its not a global variable
	Function();
	Function();
	Function();
	Function();

	std::cin.get();
}