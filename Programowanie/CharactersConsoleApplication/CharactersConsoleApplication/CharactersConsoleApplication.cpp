#include <iostream>
#include <string>

/*
* Wczytaj słowo i wypisz pierwszą oraz ostatnią literę.
* Użytkownik podaje tekst, a program zamienia wszystkie litery na wielkie.
* Napisz program, który wypisuje tekst od końca.
* Zamień wszystkie cyfry na znak „*”. Przykład: „abc123” ? „abc***”.
* Napisz program, który będzie prosił o hasło. Nie przepuści dalej dopóki nie zostanie ono podane prawidłowo.
* Napisz program, który pobiera od użytkownika ciąg znaków i wyświetla liczbę samogłosek i spółgłosek w tym ciągu.
*
*
* Program wyciągający informacje z numeru PESEL
* Poproś użytkownika o wprowadzenie liczby całkowitej w systemie dziesiętnym. Następnie skonwertuj tę liczbę na system dwójkowy (binarny) i wyświetl wynik.

*/

//Napisz program który pobierze znak od użytkownika i wyświeli go.
void task1()
{
	char characterFromUser;
	std::cout << "Podaj znak\n";
	std::cin >> characterFromUser;

	std::cout << "Podałeś znak:" << characterFromUser << "\n";
}

//Napisz program, który wczyta znak z klawiatury 
//i sprawdzi czy jest to mała litera alfabetu.
//ZADANIE:
//* czy jest to duża litera alfabetu
//* czy  jest to znak cyfry
void task2()
{
	char characterFromUser;
	std::cout << "Podaj znak\n";
	std::cin >> characterFromUser;

	//if (characterFromUser >= 97 && characterFromUser <= 122)
	if (characterFromUser >= 'a' && characterFromUser <= 'z')
		std::cout << "Jest to mała litera alfabetu\n";
	else
		std::cout << "Nie jest to mała litera alfabetu\n";

	//if (characterFromUser >= 65 && characterFromUser <= 90)
	if (characterFromUser >= 'A' && characterFromUser <= 'Z')
		std::cout << "Jest to duża litera alfabetu\n";
	else
		std::cout << "Nie jest to duża litera alfabetu\n";
	/*
	char x;
	x = 'a';
	std::cout << x<<"\n";
	x = x + 2;
	std::cout << x << "\n";
	x = 'b' + 2;
	std::cout << x << "\n";
	*/
}

//Napisz program, który poprosi cie o twoje imię i cię przywita.
void task3()
{
	std::string userName;
	std::cout << "Podaj imię:\n";
	std::cin >> userName;

	std::cout << "Witaj " << userName << " tutaj.\n";
}

//Program sprawdzający czy podane hasło jest poprawne 
//(np. jeśli hasło jest "abc123", program powinien wyświetlić "hasło poprawne", 
//jeśli jest inne, powinien wyświetlić "hasło niepoprawne").
void task4()
{
	std::string password;
	std::cout << "Podaj hasło\n";
	std::cin >> password;

	if (password == "abc123")
		std::cout << "Hasło poprawne\n";
	else
		std::cout << "Hasło niepoprawne\n";
}

//Napisz program, który wczyta łańcuch znaków i policzy ile jest małych liter 'a'.
void task5()
{
	std::string textFromUser;
	std::cout << "Podaj łańcuch znaków\n";
	std::cin >> textFromUser;

	/*
	textFromUser = "abyrcdgt";
	std::cout << "Pierwszy znak to "<< textFromUser[0] << "\n";
	textFromUser[1] = 'x';
	std::cout << textFromUser << "\n";
	std::cout << "Ilość znaków "<< textFromUser.length() << "\n";
	*/

	int counter = 0;
	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] == 'a')
			counter++;
	}

	std::cout << "Małych liter 'a' jest " << counter << "\n";
}

//Napisz program który wygeneruje hasło.
void task6()
{
	std::string passowrd = "";
	int passordLength;

	const int LOWER_RANGE_LENGTH = 4;
	const int UPPER_RANGE_LENGTH = 12;

	srand(time(NULL));
	passordLength = rand() % (UPPER_RANGE_LENGTH - LOWER_RANGE_LENGTH + 1) + LOWER_RANGE_LENGTH;

	for (int i = 0; i < passordLength; i++)
	{
		char character;
		character = rand() % ('z' - 'a' + 1) + 'a';

		passowrd = character + passowrd;
	}

	std::cout << "Wygenerowane hasło " << passowrd << "\n";

	passowrd = "ola";
	std::cout << passowrd[3000];
}
//Wczytaj słowo i wypisz pierwszę oraz ostatnią literę.
void task7()
{
	std::string textFromUser;
	std::cout << "Podaj łańcuch znaków\n";
	//std::cin >> textFromUser;
	std::getline(std::cin, textFromUser);

	std::cout << "Podano dane: " << textFromUser << "\n";
	std::cout << "Pierwsza litera " << textFromUser[0] << "\n";
	std::cout << "Ostatnia litera " << textFromUser[textFromUser.length() - 1] << "\n";
}
//U¿ytkownik podaje tekst, a program zamienia wszystkie litery na wielkie.
void task8()
{
	std::string textFromUser;
	std::cout << "Podaj łańcuch znaków\n";
	//std::cin >> textFromUser;
	std::getline(std::cin, textFromUser);

	for (int i = 0; i < textFromUser.length(); i++)
	{
		//if (textFromUser[i] >= 97 && textFromUser[i] <= 122)
		if (textFromUser[i] >= 'a' && textFromUser[i] <= 'z')
		{

		}
	}
}
//Program sprawdzający czy podany ciąg znaków 
//jest palindromem (czyli takim, który czytany od tyłu jest taki sam
//jak czytany od przodu, np. "kajak")
void task20()
{
	std::string textFromUser;
	std::cout << "Podaj tekst\n";
	std::cin >> textFromUser;

	std::string reverseText = "";
	for (int i = 0; i < textFromUser.length(); i++)
	{
		reverseText = textFromUser[i] + reverseText;
	}

	if (textFromUser == reverseText)
		std::cout << "Ten tekst jest palindromem\n";
	else
		std::cout << "Ten tekst nie jest palindromem\n";
}

/*
DRY - don't repeat yourself - nie powtarzaj siê
KISS - Keept it simple, stupid - trzymaj prostotê g³upcze
YAGNI - you aren't gonna need it - nie potrzebujesz tego
*/

//Napisz program, który wczyta np. 5 liczb 
//a nastêpnie wyœwietli je w odwrotnej kolejnoœci.
void task21()
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
		std::cout << "Podaj liczbê:\n";
		std::cin >> numbers[i];
	}

	for (int i = ARRAY_SIZE - 1; i >= 0; i--)
		std::cout << numbers[i] << "\n";

}


int main()
{
	setlocale(LC_CTYPE, "polish");

	task6();
}
