#include "module1.h"
#include "module2.h"
#include <iostream>

int main(int argc, char** argv)
{
	std::cout << "Hello world! It's my first cpp project!" << "\n";

	std::cout << Module1::getMyName() << "\n";
	std::cout << Module2::getMyName() << "\n";

	using namespace Module1;
	std::cout << getMyName() << "\n"; // (A)
	std::cout << Module2::getMyName() << "\n";

	//using namespace Module2; // (B)
	//std::cout << getMyName() << "\n"; // COMPILATION ERROR (C)
	//ошибка возникает из-за того, что мы уже объявили локальную функцию getMyName(), 
	//необходимо использовать объявление, как изначально написано строкой ниже:

	using Module2::getMyName;
	std::cout << getMyName() << "\n"; // (D)
	
	//èëè èñïîëüçîâàòü std::cout << Module2::getMyName()
	return 0;
}
