#include <iostream>



//Napisz program który wczyta liczbę od użytkownika i ją wyświetl na konsoli.
void task1()
{
	//wczytanie liczby
		   //deklaracja zmiennych          1
		   //pobranie liczby
			   //informacja co chcemy      2
			   //oczekiwanie na liczbę     3

	   //wyświetlenie na konsoli           4

	//1
	int numberFromUser;//number_from_user
	//2
	std::cout << "Podaj liczbę całkowitą:\n";
	//3
	std::cin >> numberFromUser;
	//4
	std::cout << "Podałeś " << numberFromUser << "\n";
}
//Program obliczający średnią arytmetyczną dwóch liczb.
void task2()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwszą liczbę:\n";
	std::cin >> firstNumber;


	std::cout << "Podaj drugą liczbę:\n";
	std::cin >> secondNumber;

	int avg;

	avg = (firstNumber + secondNumber) / 2;

	std::cout << "Wynik średniej: " << avg << "/n";
}
//Program obliczający pole prostokąta.
void task3()
{
	int sideA, sideB;
	std::cout << "Podaj wartość pierwszego boku:\n";
	std::cin >> sideA;

	std::cout << "Podaj wartość drugiego boku:\n";
	std::cin >> sideB;

	int area;

	area = (sideA * sideB);

	std::cout << "Wynik pola prostokąta: " << area << "\n";
}
//Program obliczający objętość stożka.
void task4()
{
	int coneHeight, ray;
	float π;
	std::cout << "Podaj promień stożka:\n";
	std::cin >> ray;

	std::cout << "Podaj wysokość stożka:\n";
	std::cin >> coneHeight;

	π = 3.14;

	int bulk;

	bulk = (π * ray * ray * coneHeight) / 3;

	std::cout << "Wynik objetość stożka: " << bulk << "\n";
}
//Program obliczający pole koła.
void task5()
{
	int rayCircle;
	float π;
	std::cout << "Podaj promień koła:\n";
	std::cin >> rayCircle;

	π = 3.14;

	int areaCircle;

	areaCircle = π * (rayCircle * rayCircle);

	std::cout << "Wynik pola koła: " << areaCircle << "\n";
}
//Program obliczający wartość wyrażenia a^2 + b^2
void task6()
{
	int valueA, valueB;
	std::cout << "Podaj wartość a:\n";
	std::cin >> valueA;

	std::cout << "Podaj wartość b:\n";
	std::cin >> valueB;

	int expressionValue;

	expressionValue = (valueA * valueA) + (valueB * valueB);

	std::cout << "Wynik wartość wyrazenia: " << expressionValue << "\n";
}
//Program obliczający pole trójkąta o podstawie b i wysokości h
void task7()
{
	int sideB, heightTriangle;
	std::cout << "Podaj wartość boku b: \n";
	std::cin >> sideB;

	std::cout << "Podaj wysokość trójkąta: \n";
	std::cin >> heightTriangle;

	int area;

	area = (sideB * heightTriangle) / 2;

	std::cout << "Wynik pola trójkąta: " << area << "\n";
}
//Program obliczający objętość kuli o promieniu r
void task8()
{
	int raySphere;
	float π;
	std::cout << "Podaj promień kuli:\n";
	std::cin >> raySphere;

	π = 3.14;

	int bulk;

	bulk = (4 / 3 * π) * (raySphere * raySphere * raySphere);

	std::cout << "Wynik objetość kuli: " << bulk << "\n";
}
//Program obliczający pole trapezu o podstawach a i b oraz wysokości h
void task9()
{
	int sideA, sideB, heightTrapeze;
	std::cout << "Podaj wartość boku a:\n";
	std::cin >> sideA;

	std::cout << "Podaj wartość boku b:\n";
	std::cin >> sideB;

	std::cout << "Podaj wyskość trapezu:\n";
	std::cin >> heightTrapeze;

	int area;

	area = ((sideA + sideB) * heightTrapeze) * 1 / 2;

	std::cout << "Wynik pola treapezu: " << area << "\n";
}
//Program obliczający średnią ważoną trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
void task10()
{
	int firstRating, secondRating, lastRating, firstScales, secondScales, lastScales;
	std::cout << "Podaj pierwszą ocene: \n";
	std::cin >> firstRating;

	std::cout << "Podaj wage pierszej oceny: \n";
	std::cin >> firstScales;

	std::cout << "Podaj drugą ocene: \n";
	std::cin >> secondRating;

	std::cout << "Podaj wage drugiej oceny: \n";
	std::cin >> secondScales;

	std::cout << "Podaj trzeciej oceny: \n";
	std::cin >> lastRating;

	std::cout << "Podaj wage trzeciej oceny: \n";
	std::cin >> lastScales;

	int mean;

	mean = (firstRating * firstScales + secondRating * secondScales + lastRating * lastScales) / (firstScales + secondScales + lastScales);

	std::cout << "Wynik średniej ważonej: " << mean << "\n";
}
//Stwórz program, który pobiera od użytkownika długość w metrach i przelicza ją na centymetry i milimetry, wyświetlając wynik.
void task11()
{
	int metersFromUser;
	std::cout << "Podaj długość w metrach: \n";
	std::cin >> metersFromUser;

	int recalculation;

	recalculation = metersFromUser * 100;

	std::cout << "Przeliczenie metrów na centymetry: " << recalculation << "\n";

	recalculation = (metersFromUser * 100) * 10;

	std::cout << "Przeliczenie centymetrów na milimetry: " << recalculation << "\n";
}
//Napisz program, który konwertuje wprowadzoną kwotę w jednej walucie na inną, korzystając z określonego kursu wymiany.
void task12()
{
	int value€;
	float Pln;
	std::cout << "Podaj kwote euro \n";
	std::cin >> value€;

	Pln = 4.26;

	int exchange;

	exchange = value€ * Pln;

	std::cout << "Przelicznona kwota z euro na złotówki: " << exchange << "\n";
}
int main()
{

	setlocale(LC_CTYPE, "polish");
	task12();
}

/*


Zmienna - pewien obszar pamięci operacyjnej, w której można
w danej chwili przechować tylko jedną daną

Instrukcja deklaracji zmiennej:
typ_zmienej nazwa_zmienej;

Typ zmiennej - wielkość obszaru pamięci, interpretacja ciągu bitów

int - 4 bajtowy liczba całkowita ze znakiem <-2 147 483 648, 2 147 483 647>
short - 2 bajtowa liczba całkowita ze znakiem <-32 768, 32 767>
long - 4 bajtowa liczba całkowita ze znakiem <-2 147 483 648, 2 147 483 647>
long long - 8 bajtowa liczba ze znakiem <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

unsigned - zmienna bez znaku <0, 2*max + 1>

float - 4 bajtowa liczba rzeczywista, dokładność 6-7 cyfr po przecinku
double - 8 bajtowa liczba rzeczywista, dokładność 15-16 cyfr po przecinku
long double - 12 bajtowa liczba rzeczywista, dokładność 19-20 cyfr po przecinku

Nazwa zmiennej - nazwa obszaru w pamięci, identyfikator
Warunki niezbędne:
* dozwolone znaki:
	- alfabet angielski aA-zZ
	- cyfry arabskie 0-9
	- podkreślenie (podłoga) _
* pierwszym znakiem nie może być cyfra
* unikalny w swoim zakresie widoczności
* nie może to być słowo kluczowe (zarezerwowane) danego języka

Warunki programistów:
* nazwa zmiennej powinna oddawać charakter przechowywanych danych
* jeśli wiele słów to w miejscu spacji podkreślenie lub zaczynając od drugiego
  słowa piszemy je z dużej litery
* piszemy po angielsku

ctrl k d
*/