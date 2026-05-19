#include <iostream>
#include <string>

/*
Zadania:

*
*
* 
* 
* 
* 
*
* 

*/

/*
DRY - don't repeat yourself - nie powtarzaj się
KISS - Keept it simple, stupid - trzymaj prostotę głupcze
YAGNI - you aren't gonna need it - nie potrzebujesz tego
*/

//Napisz program, który wczyta np. 5 liczb 
//a następnie wyświetli je w odwrotnej kolejności.
void task1()
{
	/*
	int number0, number1, number2, number3, number4 ;

	std::cout << "Podaj liczbê:\n";
	std::cin >> number0;
	std::cout << "Podaj liczbê:\n";
	std::cin >> number1;
	std::cout << "Podaj liczbê:\n";
	std::cin >> number2;
	std::cout << "Podaj liczbê:\n";
	std::cin >> number3;
	std::cout << "Podaj liczbê:\n";
	std::cin >> number4;

	std::cout << number4 << "\n";
	std::cout << number3 << "\n";
	std::cout << number2 << "\n";
	std::cout << number1 << "\n";
	std::cout << number0 << "\n";
	*/

	/*
	int x = 0;

	std::cout << "Podaj liczbê:\n";
	std::cin >> "number" + x;
	x++;

	std::cout << "Podaj liczbê:\n";
	std::cin >> "number" + x;
	x++;

	std::cout << "Podaj liczbê:\n";
	std::cin >> "number" + x;
	x++;

	std::cout << "Podaj liczbê:\n";
	std::cin >> "number" + x;
	x++;

	std::cout << "Podaj liczbê:\n";
	std::cin >> "number" + x;
	x++;
	*/

	/*
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Podaj liczbê:\n";
		std::cin >> "number" + i;
	}
	*/

	//int number0, number1, number2, number3, number4;
	const unsigned short ARRAY_SIZE = 5;
	int numbers[ARRAY_SIZE];
	//numbers[2] = 10;

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << "Podaj liczbę:\n";
		std::cin >> numbers[i];
	}

	for (int i = ARRAY_SIZE - 1; i >= 0; i--)
		std::cout << numbers[i] << "\n";
}
//Napisz program, który uzupełni tablicę liczbami losowymi a następnie znajdzie minimum oraz maksimum.
void task2()
{
	const short LOWER_RANGE = -40;
	const short UPPER_RANGE = -10;

	const unsigned short ARRAY_SIZE = 100;
	int numbers[ARRAY_SIZE];

	srand(time(0));

	std::cout << "wylosowane liczby:\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}

	int max = numbers[0];

	for (int i = 1; i < ARRAY_SIZE; i++)
		if (numbers[i] > max)
			max = numbers[i];

	std::cout << "Max to: " << max << "\n";

	int min = numbers[0];

	for (int i = 1; i < ARRAY_SIZE; i++)
		if (numbers[i] < min)
			min = numbers[i];

	std::cout << "Min to: " << min << "\n";
}

//Napisz program obliczający średnią arytmetyczną elementów w tablicy liczb całkowitych.
void task3()
{
	// <LOWER_RANGE; UPPER_RANGE> przy założeniu, że LOWER_RANGE <= UPPER_RANGE
	const unsigned short LOWER_RANGE = 5;
	const unsigned short UPPER_RANGE = 7;

	const unsigned short ARRAY_SIZE = 3;
	int numbers[ARRAY_SIZE];

	srand(time(0));

	std::cout << "wylosowane liczby:\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
	//----------------------------------------------------------------------------

	int sum = numbers[0];
	for (int i = 1; i < ARRAY_SIZE; i++)
		sum = sum + numbers[i];

	double avg = sum * 1.0 / ARRAY_SIZE;

	std::cout << "średnia wynosi: " << avg << "\n";
}
//Utwórz tablicę zawierającą 5 liczb całkowitych podanych przez użytkownika i wypisz wszystkie jej elementy.
void task4()
{
	int numbers[5];

	std::cout << "Podaj 5 liczb całkowitych:" << "\n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << "number" << i + 1 << ":";
		std::cin >> numbers[i];
	}
	std::cout << "\n elementy w tablicy to:" << "\n";

	for (int i = 0; i < 5; i++)
	{
		std::cout << numbers[i] << " ";
	}

}
//Wczytaj do tablicy 10 liczb, a następnie wypisz tylko te, które są większe od zera.
void task5()
{
	int numbers[10];

	std::cout << "Podaj 10 liczb całkowitych:" << "\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << "number" << i + 1 << ": ";
		std::cin >> numbers[i];
	}
	std::cout << "\nliczby wieksze od zera to:" << "\n";
	for (int i = 0; i < 10; i++)
	{
		if (numbers[i] > 0)
		{
			std::cout << numbers[i] << " ";
		}
	}

}
//W tablicy znajdujżą się oceny ucznia. Oblicz średnią arytmetyczną ocen.
void task6()
{
	int grades[10];
	double sum = 0;

	std::cout << "Podaj 10 ocen uczniów:" << "\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << "grade" << i + 1 << ": ";
		std::cin >> grades[i];
		sum += grades[i];
	}

	double average = sum / 10;
	std::cout << "\nśrednia ocen wynosi: " << average << "\n";
}
//Dana jest tablica 10 liczb. Policz, ile elementów jest parzystych.
void task7()
{
	int numbers[10];
	int counter = 0;

	std::cout << "Podaj 10 liczb:" << "\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Podaj liczbe " << i + 1 << ": ";
		std::cin >> numbers[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (numbers[i] % 2 == 0)
		{
			counter++;
		}
	}
	std::cout << "elementy parzyste:" << counter << "\n";
}
//Wczytaj do tablicy 5 liczb i wypisz je w odwrotnej kolejności.
void task8()
{
	int numbers[5];

	std::cout << "Podaj 5 liczb:\n";
	for (int i = 0; i < 5; i++)
	{
		std::cin >> numbers[i];
	}

	std::cout << "Liczby w odwrotnej kolejności:\n";

	for (int i = 4; i >= 0; i--)
	{
		std::cout << numbers[i] << " ";
	}
}
//Dana jest tablica liczb całkowitych. Sprawdż, czy w tablicy znajduje się liczba podana przez użytkownika.
void task9()
{
	int numbers[] = { 12, 45, 7, 23, 89 };
	int target;

	std::cout << "Podaj liczbe: ";
	std::cin >> target;

	for (int i = 0; i < 5; i++)
	{
		if (numbers[i] == target)
		{
			std::cout << "Tak, liczba jest w tablicy!\n";
		}
	}
}
// W tablicy zapisano wiek 7 osób. Policz, ile osób jest pełnoletnich.
void task10()
{
	int age[7];
	int counter = 0;

	std::cout << "Podaj wiek 7 osób:" << "\n";
	for (int i = 0; i < 7; i++)
	{
		std::cout << "Podaj wiek " << i + 1 << ": ";
		std::cin >> age[i];
	}
	for (int i = 0; i < 7; i++)
	{
		if (age[i] >= 18)
		{
			counter++;
		}
	}
	std::cout << "liczba osób pełnoletnich:" << counter << "\n";
}
//Dana jest tablica 5 liczb. Oblicz ę między największym a najmniejszym elementem.
void task11()
{
	int numbers[] = { 12, 45, 7, 23, 89 };

	int max = numbers[0];
	int min = numbers[0];

	for (int i = 1; i < 5; i++) 
	{
		if (numbers[i] > max) 
		{
			max = numbers[i];
		}
		if (numbers[i] < min) 
		{
			min = numbers[i];
		}
	}

	int difference = max - min;

	std::cout << "Najwieksza: " << max << "\n";
	std::cout << "Najmniejsza: " << min << "\n";
	std::cout << "Roznica wynosi: " << difference << "\n";
}
int main()
{
	setlocale(LC_CTYPE, "polish");

	task10();
}
