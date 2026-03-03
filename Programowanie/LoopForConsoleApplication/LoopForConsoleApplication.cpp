#include <iostream>
#include<windows.h>

/*
* 

* 

* 

* 

*/
void task1()
{
	int howManyTimes;
	std::cout << "Podaj ile razy wyświetlać\n";
	std::cin >> howManyTimes;

	for (int i = 0; i < howManyTimes; i++)
	{
		std::cout << "Hello world\n";
	}

}
void task2()
{
	int upperRange;
	std::cout << "Podaj górną granice do wyświetlenia\n";
	std::cin >> upperRange;

	for (int i = 0; i <= upperRange; i += 2)
	{
		std::cout << i << "\n";
	}
}
void task3()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		//std::cout << i << "\n";
		sum = sum + i;
	}
	std::cout << "Suma" << sum << "\n";
}
//Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task4()
{
	for (int i = 3; i <= 100; i += 3)
	{
		std::cout << i << "\n";
	}
}
//Napisz program, który wypisze liczby od 10 do 1 w odwrotnej kolejności.
void task5()
{
	for (int i = 10; i > 0; i--)
	{
		std::cout << i << "\n";
	}
}
//Napisz program, który obliczy iloczyn liczb od 1 do podanej przez użytkownika.
void task6()
{
	int numberFromUser;
	std::cout << "Podaj liczbe:";
	std::cin >> numberFromUser;

	long long iloczyn = 1;

	for (int i = 1; i <= numberFromUser; i++)
	{
		iloczyn *= i;
	}
	
	std::cout << "Iloczyn liczb od 1 do " << numberFromUser << "\n wynosi: " << iloczyn << "\n";
}
/*
Napisz program, który wypisze w kolejnych liniach rosnącą liczbę cyfr, np.:
1
12
123
1234
*/
void task7()
{
	int numberFromUser;
	std::cout << "Podaj liczbe:";
	std::cin >> numberFromUser;

	for (int i = 1; i <= numberFromUser; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			std::cout << j;
		}
		std::cout << "\n";
	}

}
int main()
{
	setlocale(LC_CTYPE, "polish");

	task7();
}
