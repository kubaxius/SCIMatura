#include <iostream>
#include <fstream>
#include <string>
#include "SCILibrary.h"
#include "time.h"

//Funkcja zwraca iloœæ cyfr podanej liczby
short CounterDigit(int liczba)
{
	short counter_digit = 0;//licznik cyfr
	if (liczba == 0) counter_digit = 1;
	while (liczba != 0)
	{
		counter_digit++;
		liczba /= 10;//jest to system dziesiêtny
	}
	return counter_digit;
}

//Funkcja zwraca sumê cyfr liczy ca³kowitej
int SumDigit(int value)
{
	int suma_cyfr = 0;//zak³adamy, ¿e suma równa siê zero

	while (value != 0)
	{
		suma_cyfr += value % 10;	//akumulujemy sumê cyfr
		value /= 10;				//dzielimy liczbê przez 10 (system dziesiêtny)
	}
	return suma_cyfr;
}

//Funkcja sprawdza, czy w tablicy znajduje siê szukana wartoœæ
bool LineSearch(int tab[], int tab_size, int value_searched)
{
	for (int i = 0; i < tab_size; i++)
	if (tab[i] == value_searched)
		return true;
	return false;
}


//Funkcja losuje liczbê z przedzia³u obustronnie domkniêtego
int Rand(int min, int max)
{
	//P a m i ê t a j !!! - ziarno
	//Zawsze ustawiaj tylko jeden raz
	//np: w main() - zaraz na pocz¹tku kodu
	//poprawne wywo³anie funkcji:
	//	srand((unsigned)time(NULL));

	int pseudolosowa = ((rand() % (max - min + 1))) + (min);
	return pseudolosowa;//nasza cywilizacja potrafi za pomoc¹
	//komputerów generowaæ tylko liczby
	//p s e u d o l o s o w e
}

//Funkcja zwraca flagê, czy ³añcch jest palindromem
bool Palindrome(const std::string & word)
{
	return false;//napisz sobie sam!!!
}

//Funkcja konwerstuje typ int na std::string
std::string IntToString(int value)
{
	std::stringstream ssBufor;	//stringstream...bufor
	std::string sWynik;			//zwyk³y string - to zwraca funkcja
	ssBufor << value;			//wysy³amy liczbê int do bufora
	ssBufor >> sWynik;			//przepisujemy z bufora do zwyk³ego stringa,
	//z którym mo¿emy ju¿ sobie "poradziæ"...
	return sWynik;
}
