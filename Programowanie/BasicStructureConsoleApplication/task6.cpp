#include "tasks.h"
#include <iostream> 
#include <string>

/*Sprzedaż produktu z magazynu.
Zdefiniuj strukturę StockProduct przechowującą nazwę produktu, cenę jednej
sztuki i liczbę dostępnych sztuk.Wczytaj te dane oraz liczbę zamawianych
sztuk.Cena i stan magazynu są nieujemne.
Napisz funkcję obliczającą wartość całego zapasu oraz funkcję sprzedaży.
Funkcja sprzedaży otrzymuje produkt przez referencję i liczbę zamawianych
sztuk.Zmniejsza zapas i zwraca true, jeżeli zamówiono dodatnią liczbę sztuk
i towaru wystarcza.W przeciwnym razie zwraca false bez zmiany zapasu.
Wyświetl wartość zapasu przed sprzedażą, informację o powodzeniu sprzedaży
oraz liczbę pozostałych sztuk i wartość zapasu po próbie sprzedaży.*/

struct StockProduct
{
	std::string ProductName;
	double PricePerItem;
	double AvalbleItemInMagazine;

};

void ProductPurchase(StockProduct& Purchase)
{
	std::cout << "Podaj Nazwe Prodkutu		:";
	std::cin >> Purchase.ProductName;
	std::cout << "Podaj Cene Prodkutu		:";
	std::cin >> Purchase.PricePerItem;
	std::cout << "Podaj Liczbe Dostepnych Sztuk		:";
	std::cin >> Purchase.AvalbleItemInMagazine;
}

double CalculateItemCost(StockProduct& Purchase)
{
	return Purchase.PricePerItem * Purchase.AvalbleItemInMagazine;
}

void task6()
{
	StockProduct Purchase;
	ProductPurchase(Purchase);
	double cost = CalculateItemCost(Purchase);
	std::cout << "Nazwa Produktu	: " << Purchase.ProductName << "\n";
	std::cout << "Koszt Produktu	: " << cost << " PLN\n";
}