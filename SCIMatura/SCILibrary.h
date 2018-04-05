#ifndef H_SCILIBRARY
#define H_SCILIBRARY

//2017, October - by Kuba NiedŸwiedŸ



///Funkcja zwraca flagê czy rok jest przestêpny
///
///@param year - rok
///
bool checkIfYearIsLeap(int year);

///
///Funkcja zwraca iloœæ cyfr podanej liczby
///
///@param liczba - liczba dla której wyliczamy z ilu sk³ada siê czyfr
///
short CounterDigit(int liczba);

///
///Funkcja zwraca sumê cyfr liczy ca³kowitej
///
///@param value - liczba
///
int SumDigit(int value);

///
///Funkcja sprawdza, czy w tablicy znajduje siê szukana wartoœæ
///
///@param tab[] - tablica typu int
///
///@param tab_size - rozmiar tablicy
///
///@param value_searched - wartoœæ, której szukamy
///
bool LineSearch(int tab[], int tab_size, int value_searched);

///
///Funkcja losuje liczbê z przedzia³u obustronnie domkniêtego
///
///@param min - dolna wartoœæ zakresu
///
///@param max - górna wartoœæ zakresu
///
int Rand(int min, int max);

///
///Funkcja zwraca flagê, czy ³añcch jest palindromem
///
///@param & word - sta³a refrencja na obiekt klasy std::string
///
bool Palindrome(const std::string & word);

///
///Funkcja konwerstuje typ int na std::string
///
///@param value - liczba typu int
///
std::string IntToString(int value);

///
///Funkcja oblicza wartoœæ wielomianu - schemat Hornera - iteracyjnie
///
///@param wsp[] - tablica wspó³czynników
///
///@param st - stopieñ wielomianu
///
///@param x - wartoœæ x, dla którego liczymy wartoœæ wielomianu
///
int Horner_Iteration(int wsp[], int st, int x);

///
///Funkcja oblicza wartoœæ wielomianu - schemat Hornera - rekurencyjnie
///
///@param wsp[] - tablica wspó³czynników
///
///@param st - stopieñ wielomianu
///
///@param x - wartoœæ x, dla którego liczymy wartoœæ wielomianu
///
int Horner_Recursion(int wsp[], int st, int x);

#endif //H_SCILIBRARY