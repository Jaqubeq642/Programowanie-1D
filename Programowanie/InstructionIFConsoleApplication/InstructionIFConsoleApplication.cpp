#include <iostream>

/*

DRY		- Don't Repeat Yourself (Nie Powtarzaj się)

KISS	- Keep It Simple, Stupid (Trzymaj się prostoty głupcze)

Operator warunkowy:
>		- większy
<		- mniejszy
>=		- większy bądż równy
<+		- mnieszy bądż równy
==		- równy
!=		- różny (<> bazy danych )

Operatory loginczne:
&&		- AND (i)
||	    - Or (lub)
!		- not (zaprzeczenie)

a	b	a && b	a || B	!a
F	F	   F	   F	 T
F	T	   F	   T	 T
T	F      F	   T	 F
T	T	   T	   T	 F

a && b || c c && d
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

	if (!(reminderOfDivision == 0));
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
	//wersja 1
	if (number >= 1)
	{ 
		if (number < 10)
			std::cout << "Liczba jest w zakresie <1;10)\n";
		else
			std::cout << "Liczba nie jest w zakresie <1;10)\n";
	}
	else
	{
		std::cout << "Liczba nie jest w zakresie <1;10)\n";
	}
	//wersja 2
	if (number >= 1)
		if (number < 10)
			std::cout << "Liczba jest w zakresie <1;10)\n";
		else
			std::cout << "Liczba nie jest w zakresie <1;10)\n";
	else
		std::cout << "Liczba nie jest w zakresie <1;10)\n";
	//wersja 3
	if (number >= 1	&& number < 10)		
			std::cout << "Liczba jest w zakresie <1;10)\n";
		else
			std::cout << "Liczba nie jest w zakresie <1; 10)\n";
	//wersja 4
	if (number < 1 || number >= 10)
		std::cout << "Liczba nie jest w zakresie <1;10)\n";
	else
		std::cout << "Liczba jest w zakresie <1;10)\n";
	//wersja 5
	if (!(number >= 1 && number < 10))
		std::cout << "Liczba nie jest w zakresie <1;10)\n";
	else
		std::cout << "Liczba jest w zakresie <1;10)\n";
}


int main()
{
	setlocale(LC_CTYPE, "polish");
	 
	task3();

}