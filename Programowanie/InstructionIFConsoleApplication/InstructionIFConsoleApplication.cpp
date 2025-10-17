#include <iostream>

/*
Operator warunkowy:
>		- większy
<		- mniejszy
>=		- większy bądż równy
<+		- mnieszy bądż równy
==		- równy
!=		- różny

*/

//Napisz program, ktory wyświetli informacje czy liczba jest dodatnia czy nie
void task1()
{
	int number;
	std::cout << "Podaj liczbą całkowitą: \n";
	std::cin >> number;

	if (number > 0)
		std::cout << "Podana liczba jest dodatnia\n";

	if (number < 0)
		std::cout << "Podana liczba jest ujemna\n";

	if (number == 0)
		std::cout << "Liczba nie jest dodatnia ani ujemna\n";

	std::cout << "Koniec programu";
}
void task2()
{
	int number;
	std::cout << "Podaj liczbą całkowitą: \n";
	std::cin >> number;

	int reminderOfDivision;
	reminderOfDivision = number % 2;

	if (reminderOfDivision == 0);
		std::cout << "Podana liczba jest parzysta\n";

	if (reminderOfDivision != 0);
		std::cout << "Podana liczba jest nieparzysta\n";

	//--------------------------------------------------------
	if (reminderOfDivision == 0)
		std::cout << "Podana liczba jest parzysta";
	else
		std::cout << "Podana liczba jest nieparzysta";
}
void task3()
{
	int number;
	std::cout << "Podaj liczbą całkowitą: \n";
	std::cin >> number;



}

int main()
{
	setlocale(LC_CTYPE, "polish");

	task2();
}