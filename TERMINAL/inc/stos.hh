#ifndef STOS_HH
#define STOS_HH
#define ZAKRES 10000				//Zakres tablicy


template <typename T>
class Stos{						//Klasa Stos zawierajaca funkcje stosu
	int gora;					//Liczba okreslajaca najwyzszy punkt na tablicy
public:
								//Funkcje
	T tablica[ZAKRES];			//Generowani tablicy o dlugosci ZAKRES
	bool push(T a);				//Wstawianie "a" na stos
	T pop();					//Usuwanie ostatniego elementu z stosu
	T top();					//Zwraca wartosc na gorze
	int delate();				//Usuwanie wszystkich elementow z stosu
	int view();					//Pokazuje wszystkie elementy na stosie
	bool isEmpty();				//Sprawdza czy stos jest pusty
	Stos() {gora = -1;};		//Ustaienie wartosci poczatkowej GORA
};


#endif
