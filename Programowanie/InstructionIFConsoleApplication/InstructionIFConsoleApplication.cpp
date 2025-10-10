#include <iostream>

//Napisz program, ktory wyświetli informacje czy liczba jest dodatnia czy nie
void task1()
{
	int number;
	std::cout << "Podaj liczbą całkowitą: \n";
	std::cin >> number;

	if (number > 0)
		std::cout << "Podana liczba jest dodatnia\n";

	std::cout << "Koniec programu";
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	task1();
}