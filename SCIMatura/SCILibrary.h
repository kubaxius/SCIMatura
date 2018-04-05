#ifndef H_SCILIBRARY
#define H_SCILIBRARY

//2017, October - by Kuba Nied�wied�



///Funkcja zwraca flag� czy rok jest przest�pny
///
///@param year - rok
///
bool checkIfYearIsLeap(int year);

///
///Funkcja zwraca ilo�� cyfr podanej liczby
///
///@param liczba - liczba dla kt�rej wyliczamy z ilu sk�ada si� czyfr
///
short CounterDigit(int liczba);

///
///Funkcja zwraca sum� cyfr liczy ca�kowitej
///
///@param value - liczba
///
int SumDigit(int value);

///
///Funkcja sprawdza, czy w tablicy znajduje si� szukana warto��
///
///@param tab[] - tablica typu int
///
///@param tab_size - rozmiar tablicy
///
///@param value_searched - warto��, kt�rej szukamy
///
bool LineSearch(int tab[], int tab_size, int value_searched);

///
///Funkcja losuje liczb� z przedzia�u obustronnie domkni�tego
///
///@param min - dolna warto�� zakresu
///
///@param max - g�rna warto�� zakresu
///
int Rand(int min, int max);

///
///Funkcja zwraca flag�, czy �a�cch jest palindromem
///
///@param & word - sta�a refrencja na obiekt klasy std::string
///
bool Palindrome(const std::string & word);

///
///Funkcja konwerstuje typ int na std::string
///
///@param value - liczba typu int
///
std::string IntToString(int value);

///
///Funkcja oblicza warto�� wielomianu - schemat Hornera - iteracyjnie
///
///@param wsp[] - tablica wsp�czynnik�w
///
///@param st - stopie� wielomianu
///
///@param x - warto�� x, dla kt�rego liczymy warto�� wielomianu
///
int Horner_Iteration(int wsp[], int st, int x);

///
///Funkcja oblicza warto�� wielomianu - schemat Hornera - rekurencyjnie
///
///@param wsp[] - tablica wsp�czynnik�w
///
///@param st - stopie� wielomianu
///
///@param x - warto�� x, dla kt�rego liczymy warto�� wielomianu
///
int Horner_Recursion(int wsp[], int st, int x);

#endif //H_SCILIBRARY