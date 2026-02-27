#include <iostream>
#include<windows.h>

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
int main()
{
	setlocale(LC_CTYPE, "polish");

	task3();
}
