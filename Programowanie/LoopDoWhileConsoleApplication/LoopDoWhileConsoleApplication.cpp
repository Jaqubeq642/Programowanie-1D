#include <iostream>
#include<windows.h>
/*
* 
* 
* 
* 
* 
*/
void task1()
{
	int number;
	/*
	std::cout << "Podaj dodatnią liczbę:\n";
	std::cin >> number;

	if (number < 0)
	{
		std::cout << "Podaj dodatnią liczbę:\n";
		std::cin >> number;
		if (number < 0)
		{
			std::cout << "Podaj dodatnią liczbę:\n";
			std::cin >> number;
			if (number < 0)
			{
				std::cout << "Podaj dodatnią liczbę:\n";
				std::cin >> number;
				if (number < 0)
				{
					//...
				}
			}
		}
	}
	*/

	do
	{
		std::cout << "Podaj dodatnią liczbę:\n";
		std::cin >> number;
	} while (number < 0);

	std::cout << "Podałeś dodatnią liczbę: " << number << "\n";
}

//Napisz program, który wylosuje liczbê 
//a następnie uzytkownik będzie musiał ją zgadnąć.
void task2()
{
	int randomNumber;
	const int LOWER_RANGE = 1;
	const int UPPER_RANGE = 100;

	srand(time(NULL));

	std::cout << "Rand() zwraca wartości z przedziału <0;" << RAND_MAX << ">\n";

	//LOWER_RANGE = 5; //błędna instrukcja
	//<9; 50>
	randomNumber = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;

	//std::cout << "Wylosowana liczba: " << randomNumber << "\n";

	int number;

	/*
	std::cout << "Podaj liczbę:\n";
	std::cin >> number;
	if (number != randomNumber)
	{
		std::cout << "Podaj liczbę:\n";
		std::cin >> number;
		if (number != randomNumber)
		{
			std::cout << "Podaj liczbę:\n";
			std::cin >> number;
			if (number != randomNumber)
			{
				//...
			}
		}
	}
	*/

	do
	{
		std::cout << "Podaj liczbę:\n";
		std::cin >> number;
		if (number < randomNumber)
			std::cout << "Podałeś za małą liczbę.\n";
		if (number > randomNumber)
			std::cout << "Podałeś za duzą liczbę.\n";
	} while (number != randomNumber);

	std::cout << "Gratulacje!!!\nZgadłeś liczbę\n";
}
void task3()
{
	//std::cout << "1, 2, 3, 4, 5, 6\n";
	unsigned long long upperRange;
	std::cout << "Podaj górny zakres większy bądź równy 1\n";
	std::cin >> upperRange;
	/*
		std::cout << "1, ";
		if (upperRange > 1)
		{
			std::cout << "2, ";
			if (upperRange > 2)
			{
				std::cout << "3, ";
				if (upperRange > 3)
				{
					std::cout << "4, ";
					//...
				}
			}
		}
		std::cout << "\n";
		*/

	unsigned long long currentNumber = 0;
	do
	{
		//currentNumber = currentNumber + 1;
		//currentNumber += 1;
		//currentNumber++;
		++currentNumber;
		std::cout << currentNumber << ", ";
	} while (upperRange > currentNumber);

	std::cout << "\n";
}

//Napisz program, który policzy sumę cyfr 
// podanej przez użytkownika liczby.
void task4()
{
	int number;
	std::cout << "Podaj liczbę\n";
	std::cin >> number;

	int sum = 0;

	do
	{
		int digit = number % 10;
		sum = sum + digit;
		number = number / 10;
	} while (number != 0);

	std::cout << "Suma cyfr: " << sum << "\n";
}
//Poproś użytkownika o podawanie liczb, aż wprowadzi zero. Oblicz sumę oraz średnię arytmetyczn wprowadzonych liczb.
void task5()
{
	int number;
	int sum = 0;
	int count = 0;
	do
	{
		std::cout << "Podaj liczbę\n";
		std::cin >> number;
		sum = sum + number;
		count++;
	} while (number != 0);

	std::cout << "Suma wszystkich liczb: " << sum << "\n";
	std::cout << "Średnia arytmrtuczna wszystkich liczb: " << sum / count << "\n";
}
//Napisz program, który poprosi użytkownika o wprowadzenie dowolnej liczby całkowitej. Następnie program powinien obliczyć i wyświetlić liczbę cyfr.
void task6()
{
	int number;
	std::cout << "Podaj liczbę całkowitą:\n";
	std::cin >> number;
	int digits = 0;

	if (number == 0)
		digits = 1;
	else if (number < 0)
		number = -number;
	while (number > 0)
		number /= 10;
		digits++;
		
		std::cout << "liczba cyfr: " << digits << "\n";
}
//Program odlicza od zadanej liczby do zera (np. „Start za 5… 4… 3…”) i kończy z komunikatem „Start!”.
/*
#include<windows.h>
Sleep(milliseconds);
1000 milisekund = 1 sekunda
*/
void task7()
{
	int number;
	do
	{
		std::cout << "Podaj liczbê:\n";
		std::cin >> number;
	} while (number < 0);

	if (number >= 0)
	{
		std::cout << "Start za ";

		do
		{
			std::cout << number << ".. ";
			Sleep(1000);
			number--;
		} while (number >= 0);
		std::cout << "Stop\n";
	}
	else
		std::cout << "Poda³eœ liczbê ujemn¹\n";
}
int main()
{
	setlocale(LC_CTYPE, "polish");

	task8();
}

