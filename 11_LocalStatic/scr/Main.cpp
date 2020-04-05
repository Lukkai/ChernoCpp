#include <iostream>

/*lifetime of a viariable and scope of a varaible*/
/*a local static is a variable which has a lifetime of our whole program, however its scope is going to be only inside our meant body of a function/if statement/class/whatever we mean it to be in*/

int i = 0;  //for Function() it doesnt matter in this example if its static or not

void Function()
{
	//int i = 0;
	//static int i = 0;	//if i make it static its very similar to int i being declared outside this function. 
						//outside it wont matter for this function if its static or not for now
						//but "i" being outside the body of this function is accesible from anywhere so it can follow us to some major issues 
	i++;
	std::cout << i << std::endl;
}


int main(void)
{
	Function();
	i = 10; //examplary issue with i beibng accessible from anywhere
	Function();
	Function();
	Function();
	Function();

	std::cin.get();
}