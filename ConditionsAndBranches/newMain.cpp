#include <iostream>
#include "Log.h"

int main()
{
	const char* ptr = "Hello, remember to dring water and get sufficient amount of sleep";
	if (ptr) // (ptr != nullptr) nie trzeba bo kiedy  jest nullptr to i tak nie wejdzie do srodka petli
		Log(ptr);		//jesli moj wskaznik wskazuje na jakis element i nie jest null to wykunuje instrukcje
	/*else if (ptr == "Hello")
		Log("Ptr says Hello!");		to sie nigdy nie wykona bo wykona sie albo if albo else if, pierwszy if sie wykona, drugi nie*/
	else
		Log("Ptr is null!");
	
	/*        ///to jest to samo co else if, tylko rozbite. tak samo zbilem sobie w 7 linijce instrukcje log w if
	else
	{
		if(ptr)
		{
			Log(ptr);
		}
	}
	*/

	std::cin.get();
}