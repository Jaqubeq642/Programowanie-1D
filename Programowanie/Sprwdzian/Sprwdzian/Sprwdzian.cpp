#include <iostream>

//Napisz program który wczyta liczbê i wyœwietli jej potrojon¹ wartoœæ na konsoli.
void task1()
{
    int numberFromUser;
    std::cout << "Podaj liczbê:\n";
    std::cin >> numberFromUser;

    int numberTimes3;

    numberTimes3 = numberFromUser * 3;
    std::cout << "Wartoœæ liczby o potrójnej wartoœci:" << numberTimes3 << "\n";
}
void task2()
{
    int a, b;
    std::cout << "Podaj pierwsza liczbe: \n";
    std::cin >> a;

    std::cout << "Podaj druga liczbe: \n";
    std::cin >> b;

    int wynik;
    wynik = a / b;

    std::cout << "wartosc :" << wynik << "\n";
}
void task3()
{
    float b;
    int a;
    std::cout << "Podaj pierwsza liczbe: \n";
    std::cin >> a;

    std::cout << "Podaj druga liczbe: \n";
    std::cin >> b;

    float wynik;
    wynik = a / b;

    std::cout << "wartoœæ :" << wynik << "\n";
}
//Napisz program, który wczyta trzy liczby i wyœwietli ich œredni¹ arytmetyczn¹.
void task4()
{
    float firstNumber, secondNumber, lastNumber;

    std::cout << "Podaj pierwsz¹ liczbe: \n";
    std::cin >> firstNumber;

    std::cout << "Podaj drug¹ liczbe: \n";
    std::cin >> secondNumber;

    std::cout << "Podaj trzeci¹ liczbe: \n";
    std::cin >> lastNumber;

    float arithmeticMean;
    arithmeticMean = (firstNumber + secondNumber + lastNumber) / 3;
    std::cout << "Wartoœæ œredniej arytmetycznej:" << arithmeticMean << "\n";
}
//Napisz program który wczyta dwie liczby, obliczy i wyœwietli wyniki wed³ug schematu pokazanego na rysunku
void task5()
{
    float firstNumber, secondNumber;
    std::cout << "Podaj pierwsz¹ liczbe: \n";
    std::cin >> firstNumber;

    std::cout << "Podaj drug¹ liczbe: \n";
    std::cin >> secondNumber;

    float sum, difference, ratio, quotient;

    sum = firstNumber + secondNumber;
    difference = firstNumber - secondNumber;
    ratio = firstNumber * secondNumber;
    quotient = firstNumber / secondNumber;

    std::cout << "Suma:" << sum << "\n";
    std::cout << "Ró¿nica:" << difference << "\n";
    std::cout << "Iloczyn:" << ratio << "\n";
    std::cout << "Iloraz:" << quotient << "\n";
}
void task6()
{
    double x ;
    std::cout << "Podaj liczbe:\n";
    std::cin >> x;
}
int main()
{
    setlocale(LC_CTYPE, "polish");
    task6();
}

//int , float 
//std:cout << "w:" << w << "\n";