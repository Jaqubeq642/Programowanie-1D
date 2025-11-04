#include <iostream>

/*

DRY		- Don't Repeat Yourself (Nie Powtarzaj się)

KISS	- Keep It Simple, Stupid (Trzymaj się prostoty głupcze)

%		- Zwrot z reszty dzielenia dwóch liczb. 

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
	if (number >= 1 && number < 10)
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
void task4()
{
	int dividend, divisor;
	std::cout << "Podaj dzielnik:\n";
	std::cin >> dividend;
	std::cout << "Podaj dzielną:\n";
	std::cin >> divisor;

	if (divisor != 0)
	{
		int quoitent = dividend / divisor;
		std::cout << "Wynik dzielenia " << quoitent << "\n";
	}
	else
		std::cout << "Dzzielenie przez zero!!!\n";
}
//Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych i sprawdzi, czy są one równe.Wyświetl odpowiedni komunikat.
void task5()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwszą liczbe:\n";
	std::cin >> firstNumber;

	std::cout << "Podaj drugą liczbe:\n";
	std::cin >> secondNumber;

	if (firstNumber == secondNumber)
		std::cout << "Podane liczby są równe\n";
	else
		std::cout << "Podane liczby nie są równe\n";
}
//Napisz program, który poprosi użytkownika o podanie wieku i sprawdzi, czy osoba jest pełnoletnia. Wyświetl odpowiedni komunikat.
void task6()
{
	int age;
	std::cout << "Podaj swój wiek:\n";
	std::cin >> age;

	if (age >= 18)
		std::cout << "Jesteś osobą pełnoletnią\n";
	else
		std::cout << "Jesteś osobą niepełnoletnią\n";
}
//Napisz program, który poprosi użytkownika o podanie liczby całkowitej i obliczy jej wartość bezwzględną. Wyświetl wynik.
void task7()
{
	int number, absoluteValue;
	std::cout << "Podaj liczbe całkowitą:\n";
	std::cin >> number;

	if (number < 0) {
		number = -number;
	}
	
	std::cout << "Wartość bezwzględna tej liczby to: " << number << "\n";	
}
//Napisz program, który poprosi użytkownika o podanie roku i sprawdzi, czy jest to rok przestępny.Wyświetl odpowiedni komunikat.
void task8()
{
	int year;
	std::cout << "Podaj rok:\n";
	std::cin >> year;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		std::cout << "Rok jest przestępny: " << year << "\n";
	else
		std::cout << "Rok nie jest przestępny: " << year << "\n";
}
// Napisz program, który poprosi użytkownika o podanie liczby całkowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyświetl odpowiedni
void task9()
{
	int numberFromUser;
	std::cout << "Podaj liczbe całkowitą: \n";
	std::cin >> numberFromUser;

	if (numberFromUser % 3 == 0 && numberFromUser % 5 == 0) {
		std::cout << "Liczba jest podzielna przez 3 i 5: " << numberFromUser << "\n";
	}
	else {
		std::cout << "Liczba nie jest podzielna przez 3 i 5: " << numberFromUser << "\n";
	}
}
int main()
{
	setlocale(LC_CTYPE, "polish");

	task9();
}