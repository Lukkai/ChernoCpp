#include<iostream>
//arrays




int main(void)
{
//---------
//on stack - alive and destroyed in the process automaticly
	
	//int example[5];
	//example[0] = 2;
	//example[1] = 4;

	//int* ptr = example;
	//for (int i = 0; i < 5; i++)
	//	example[i] = 2;

	//example[2] = 5; //ex[2] = 5 and *(ptr  + 2) = 5 does is the same overall
	//*(ptr + 2) = 6;

//-------------
//creating on the heap - alive until i destroy it
	int example[5]; //this one is created on stack
	for (int i = 0; i < 5; i++)
		example[i] = 2;
	int* another = new int[5];	//this one is created on heap, it doesnt destroy by itself
								//its to manage objects lifetimes
	for (int i = 0; i < 5; i++)
		example[i] = 2;

//	std::cout << example[0] << std::endl;
//	std::cout << example[1] << std::endl;
	
	std::cin.get();
}