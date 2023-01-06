#include <iostream>
#include <ctime>
#include <set>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	// Создание переменной хранящей случайное значение
	srand(time(NULL));

	// Объявление мультисета
	multiset <int> MST;

	// Добавление случайных значений в мультисет
	cout << "Объявление случайных значений: " << endl;
	for (int i = 1; i < 15; i++) {
		int random = rand() % 10 + 2;
		MST.insert(random);
		cout << i + 1 << ") " << random << endl;
	}

	multiset <int> ::iterator it = MST.begin();

	// Вывод элементов из мультисета
	cout << "Отсортированный вариант -  " << endl;
	for (int i = 1; it != MST.end(); i++, it++) {
		cout << *it << " ";
	}

	system("pause");
	return 0;
}