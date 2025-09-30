#include <iostream>

/*
*.
*. 
*. 
*. 
*. 
*. Program obliczający objętość kuli o promieniu r
*. Program obliczający pole trapezu o podstawach a i b oraz wysokości h
*. Program obliczający średnią ważoną trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*. Stwórz program, który pobiera od użytkownika długość w metrach i przelicza ją na centymetry i milimetry, wyświetlając wynik.
*. Napisz program, który konwertuje wprowadzoną kwotę w jednej walucie na inną, korzystając z określonego kursu wymiany.
*/

//Napisz program który wczyta liczbę od użytkownika i ją wyświetl na konsoli
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
    int coneHeight, ray, π;
    std::cout << "Podaj promień stożka:\n";
    std::cin >> ray;

    std::cout << "Podaj wysokość stożka:\n";
    std::cin >> coneHeight;
    
    π = 3, 14;

    int bulk;

    bulk = (π * ray * ray * coneHeight) / 3;
    
    std::cout << "Wynik objetość stożka: " << bulk << "\n";
}
//Program obliczający pole koła.
void task5()
{ 
    int π, rayCircle;
    std::cout << "Podaj promień koła:\n";
    std::cin >> rayCircle;
    
    π = 3, 14;

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
    std::cin >> heightTriangle;

    std::cout << "Podaj wysokość tr"



}
int main()
{
    task7();
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
*/