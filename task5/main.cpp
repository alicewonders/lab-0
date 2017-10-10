#include "module1.h"
#include "module2.h"
#include "module3.h"
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
	//ошибка возникает из-за того, что мы уже объ€вили локальную функцию getMyName(), 
	//необходимо использовать объ€вление, как изначально написано строкой ниже:

	using Module2::getMyName;
	std::cout << getMyName() << "\n"; // (D)
	//или использовать std::cout << Module2::getMyName()

	std::cout << Module3::getMyName() << "\n";
	
	return 0;
}
