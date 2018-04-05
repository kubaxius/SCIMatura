#include <iostream>
#include <fstream>
#include <string>
#include "SCILibrary.h"
#include "time.h"

//Funkcja zwraca ilo�� cyfr podanej liczby
short CounterDigit(int liczba)
{
	short counter_digit = 0;//licznik cyfr
	if (liczba == 0) counter_digit = 1;
	while (liczba != 0)
	{
		counter_digit++;
		liczba /= 10;//jest to system dziesi�tny
	}
	return counter_digit;
}

//Funkcja zwraca sum� cyfr liczy ca�kowitej
int SumDigit(int value)
{
	int suma_cyfr = 0;//zak�adamy, �e suma r�wna si� zero

	while (value != 0)
	{
		suma_cyfr += value % 10;	//akumulujemy sum� cyfr
		value /= 10;				//dzielimy liczb� przez 10 (system dziesi�tny)
	}
	return suma_cyfr;
}

//Funkcja sprawdza, czy w tablicy znajduje si� szukana warto��
bool LineSearch(int tab[], int tab_size, int value_searched)
{
	for (int i = 0; i < tab_size; i++)
	if (tab[i] == value_searched)
		return true;
	return false;
}


//Funkcja losuje liczb� z przedzia�u obustronnie domkni�tego
int Rand(int min, int max)
{
	//P a m i � t a j !!! - ziarno
	//Zawsze ustawiaj tylko jeden raz
	//np: w main() - zaraz na pocz�tku kodu
	//poprawne wywo�anie funkcji:
	//	srand((unsigned)time(NULL));

	int pseudolosowa = ((rand() % (max - min + 1))) + (min);
	return pseudolosowa;//nasza cywilizacja potrafi za pomoc�
	//komputer�w generowa� tylko liczby
	//p s e u d o l o s o w e
}

//Funkcja zwraca flag�, czy �a�cch jest palindromem
bool Palindrome(const std::string & word)
{
	return false;//napisz sobie sam!!!
}

//Funkcja konwerstuje typ int na std::string
std::string IntToString(int value)
{
	std::stringstream ssBufor;	//stringstream...bufor
	std::string sWynik;			//zwyk�y string - to zwraca funkcja
	ssBufor << value;			//wysy�amy liczb� int do bufora
	ssBufor >> sWynik;			//przepisujemy z bufora do zwyk�ego stringa,
	//z kt�rym mo�emy ju� sobie "poradzi�"...
	return sWynik;
}
