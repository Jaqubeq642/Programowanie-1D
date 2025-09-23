#include <iostream>

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

}


int main()
{
    task1();
}

/*

Zmienna - pewien obszar pamięci operacyjnej, w której można
w danej chwili przechować tylko jedną daną

Instrukcja deklaracji zmiennej:
typ_zmienej nazwa_zmienej;

Typ zmiennej - wielkość obszaru pamięci, interpretacja ciągu bitów

int - 4 bajtowy liczba całkowita ze znakiem <-2 147 483 648, 2 147 483 647>

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