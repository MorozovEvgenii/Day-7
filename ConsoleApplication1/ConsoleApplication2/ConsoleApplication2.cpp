#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	setlocale(LC_ALL, "ru-RU");

	std::cout << "Первое число -  " << (rand() % 100 + 51) << "\n";
	srand(time(NULL));
	std::cout << "Случайное число - " << (rand() % 100) << "\n";
	srand(1);
	std::cout << "Число 3 - " << (rand() % 100 + 20) << "\n";

	return 0;
}