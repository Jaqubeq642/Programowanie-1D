#include <iostream>

/*

DRY		- Don't Repeat Yourself (Nie Powtarzaj się)

KISS	- Keep It Simple, Stupid (Trzymaj się prostoty głupcze)

%		- Zwrot z reszty dzielenia dwóch liczb.

Operator warunkowy:
>		- większy
<		- mniejszy
>=		- większy bądż równy
<=		- mnieszy bądż równy
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
//Program sprawdzający czy podana data jest poprawna
void task10()
{
	int day, month, year;
	std::cout << "Podaj dzień\n";
	std::cin >> day;
	std::cout << "Podaj miesiąc\n";
	std::cin >> month;
	std::cout << "Podaj rok\n";
	std::cin >> year;

	if (day >= 1 && day <= 31
		&& month >= 1 && month <= 12
		&& year != 0
		&& ((month == 4 || month == 6 || month == 9 || month == 11) && day != 31)
		&& month == 2 && (day <= 28
			|| day == 29 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
		)
	{
		std::cout << "Data " << day << "." << month << "." << year << " jest poprawna\n";
	}

	else
	{
		std::cout << "Data nie jest poprawna";
	}
}
//Napisz program, który poprosi użytkownika o podanie liczby od 1 do 7 
// i wyświetli odpowiadający mu dzień tygodnia.
void task11()
{
	int dayOfWeek;
	std::cout << "Podaj numer dnia tygodnia (1-7)\n";
	std::cin >> dayOfWeek;

	if (dayOfWeek == 1)
		std::cout << "Poniedziałek\n";
	else if (dayOfWeek == 2)
		std::cout << "Wtorek\n";
	else if (dayOfWeek == 3)
		std::cout << "Środa\n";
	else if (dayOfWeek == 4)
		std::cout << "Czwartek\n";
	else if (dayOfWeek == 5)
		std::cout << "Piątek\n";
	else if (dayOfWeek == 6)
		std::cout << "Sobota\n";
	else if (dayOfWeek == 7 || dayOfWeek == 0)
		std::cout << "Niedziela\n";
	else
		std::cout << "Dzień niepoprawny\n";

	switch (dayOfWeek)
	{
	case 1:
		std::cout << "Poniedziałek\n";
		break;
	case 2:
		std::cout << "Wtorek\n";
		break;
	case 3:
		std::cout << "Środa\n";
		break;
	case 4:
		std::cout << "Czwartek\n";
		break;
	case 5:
		std::cout << "Piątek\n";
		break;
	case 6:
		std::cout << "Sobota\n";
		break;
	case 0:
	case 7:
		std::cout << "Niedziela\n";
		break;
	default:
		std::cout << "Dzień niepoprawny\n";
	}
}
//Napisz program, który wyświetli największą liczbę ze zbioru jednoelementowego.
void task12()
{
	int firstNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> firstNumber;

	int max;

	max = firstNumber;

	std::cout << "Największa wartość to: " << max << "\n";
}

//Napisz program, który wyświetli największą liczbę ze zbioru dwuelementowego.
void task13()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> secondNumber;

	int max;

	if (secondNumber > firstNumber)
		max = secondNumber;
	else
		max = firstNumber;

	std::cout << "Największa wartość to: " << max << "\n";
}

//Napisz program, który wyświetli największą liczbę ze zbioru trójelementowego.
void task14()
{
	int firstNumber, secondNumber, thirdNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> thirdNumber;

	int max;

	if (thirdNumber > secondNumber && thirdNumber > firstNumber)
		max = thirdNumber;
	else if (secondNumber > firstNumber)
		max = secondNumber;
	else
		max = firstNumber;

	std::cout << "Największa wartość to: " << max << "\n";
}

//Napisz program, który wyświetli największą liczbę ze zbioru czteroelementowego.
void task15()
{
	int firstNumber, secondNumber, thirdNumber, fourthNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> thirdNumber;
	std::cout << "Podaj liczbę\n";
	std::cin >> fourthNumber;

	int max;

	if (fourthNumber > thirdNumber
		&& fourthNumber > secondNumber
		&& fourthNumber > firstNumber)
		max = fourthNumber;
	else if (thirdNumber > secondNumber
		&& thirdNumber > firstNumber)
		max = thirdNumber;
	else if (secondNumber > firstNumber)
		max = secondNumber;
	else
		max = firstNumber;

	std::cout << "Największa wartość to: " << max << "\n";
}
/*Napisz program, który poprosi użytkownika o podanie masy ciała(w kilogramach) i wzrostu(w metrach).
Na  podstawie tych danych oblicz wskaźnik BMI(Body Mass Index) i wyświetl odpowiedni komunikat informujący o stanie zdrowia.
poniżej 16 - wygłodzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowagę
18.5 - 24.99 - wagę prawidłową
25.0 - 29.9 - nadwagę
30.0 - 34.99 - I stopień otyłości
35.0 - 39.99 - II stopień otyłości
powyżej 40.0 - otyłość skrajną

Wzór :

BMI = masa / wysokość ^ 2*/
void task16()
{
	float bodyGrowth, bodyMass;
	std::cout << "Podaj swój wzrost w metrach:\n";
	std::cin >> bodyGrowth;
	std::cout << "Podaj swoją wage w kilogramach:\n";
	std::cin >> bodyMass;
	if (bodyGrowth <= 0)
		std::cout << "Wzrost nie może wynosić 0" << "\n";
	float bmi;
	bmi = bodyMass / (bodyGrowth * bodyGrowth);
	std::cout << "Twoje BMI wynosi:" << bmi << "\n";
	if (bmi < 16)
		std::cout << "Wygłodzenie\n";
	else if (bmi == 16 || bmi <= 16.99)
		std::cout << "Wychudzenie\n";
	else if (bmi == 17 || bmi <= 18.49)
		std::cout << "Niedowaga\n";
	else if (bmi == 18.5 || bmi <= 24.99)
		std::cout << "Waga prawidłowa\n";
	else if (bmi == 25.0 || bmi <= 29.9)
		std::cout << "Nadwaga\n";
	else if (bmi == 30.0 || bmi <= 34.99)
		std::cout << "I stopień otyłości\n";
	else if (bmi == 35.0 || bmi <= 39.99)
		std::cout << "II stopień otyłości\n";
	else if (bmi >= 40)
		std::cout << "Otyłość sktajna\n";
}
//Napisz program, który poprosi użytkownika o podanie długości trzech odcinków i sprawdzi, czy można zbudować z nich trójkąt. Wyświetl odpowiedni komunikat.
void task17()
{
	float firstStretch, secondStretch, lastStretch;
	std::cout << "Podaj długość najmiejszego odcinka:\n";
	std::cin >> firstStretch;
	std::cout << "Podaj długość następnego odcinak:\n";
	std::cin >> secondStretch;
	std::cout << "Podaj długość najwiekszego odcinka:\n";
	std::cin >> lastStretch;
	if (firstStretch > secondStretch)
		std::cout << "Podałeś złą wartość pierwszego odcinak\n";
	else if (secondStretch > firstStretch && secondStretch > lastStretch)
		std::cout << "Podałeś złą wartość drugiego odcinak\n";
	else if (lastStretch < secondStretch && lastStretch < firstStretch)
		std::cout << "Podałeś złą wartość trzeciego odcinka\n";

	if (firstStretch + secondStretch > lastStretch)
		std::cout << "Z tych odcinków można zbudować trójkąt\n";
	else
		std::cout << "Z tych odcinków nie można zbudować trójkątu\n";
}
int main()
{
	setlocale(LC_CTYPE, "polish");

	task17();
}