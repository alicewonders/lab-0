#include "module1.h"
#include "module2.h"
#include <iostream>

//чтобы не прописывать каждый раз std:: ... , необходимо прописать using namespace std; - использование стандартното пр-ва имён

int main(int argc, char** argv)
{
	//т.к. стандартное пр-во имён не подключено, то пишем std:: - чтобы показать, что мы используем функцию стандартного вывода
	std::cout << "Hello world! It's my first cpp project!" << "\n";

	std::cout << Module1::getMyName() << "\n";
	std::cout << Module2::getMyName() << "\n";

	using namespace Module1;
	std::cout << getMyName() << "\n"; // (A) //происходит обращение к пространству имён Module1 и вывод работы его функции getmyName на экран
	//квадроточие - это оператор определения области видимости
	std::cout << Module2::getMyName() << "\n";

	//using namespace Module2; // (B)
	//std::cout << getMyName() << "\n"; // COMPILATION ERROR (C)
	//ошибка возникает из-за того, что мы уже объявили локальную функцию getMyName(), 
	//необходимо использовать объявление, как изначально написано строкой ниже:
	using Module2::getMyName;
	std::cout << getMyName() << "\n"; // (D) //выше указали, что хотим использовать функцию getmyName из Модуля 2, в данной строке происходит использование и вывод её результата
	//или использовать std::cout << Module2::getMyName()
	
	return 0;
}
