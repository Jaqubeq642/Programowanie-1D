#include <iostream>

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




int main()
{
	setlocale(LC_CTYPE, "polish");

	task2();
}

