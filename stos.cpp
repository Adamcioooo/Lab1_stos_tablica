#include <iostream>
#include "stos.hh"
using namespace std;

//Funkcja PUSH umozliwia wstawianie na stos nowego elementu
template <class T>
bool Stos<T>::push(T a){	//Sprawdza czy stos nie jest przepelniony
	if(gora >= (ZAKRES - 1)){
		cout << "Stos jest przepelniony!" << endl;
		return false;
	}
	else{
		gora = gora + 1;	//Zwiekszenie zakresu GORA
		tablica[gora] = a;	//Dodawanie na stos elementu
		cout << "Wstawiono na stos:  " << tablica[gora] << endl;
		return true;
	}
}

//funkcja POP umozliwia usuniecie elementu z stosu
template <class T>
T Stos<T>::pop(){
	if(gora < 0){		//Sprawdza czy stos nie jest pusty
		cout << "Stos jest ju¿ pusty!" << endl;
		return 0;
	}
	else{
		gora = gora - 1;		//Zmniejszenie zakresu GORA
		T z = tablica[gora];	//Usuwanie lementu z stosu
		return z;
	}
}

//Wskazuje na element na samej gorze stosu
template <class T>
T Stos<T>::top(){
	if(gora < 0){		//Sprawdza czy stos jest pusty
		cout << "Stos jest pusty" << endl;
		return 0;
	}
	else{
		T x = tablica[gora];
		return x;	//Zwraca wartosc z gory stosu
	}
}

//Funkcja sprawdza czy stos jest pusty
template <class T>
bool Stos<T>::isEmpty(){
	return ( gora < 0);
}

//Funkcja usuwa wszystkie lementy z stosu
template <class T>
int Stos<T>::delate(){
	while(!isEmpty()){	//Petla tak dlugo usuwa elmenty az stos bedzie pusty
		pop();
	}
	cout << "Cala zawartosc stosu zostala usunieta!  " << endl;
	return 0;
}

//funkcja umozliwia przejrzenie calego stosu
template <class T>
int Stos<T>::view(){
	if(gora < 0){	//Sprawdzenie czy stos nie jest pusty
		cout << "Stos jest pusty" << endl;
		return 0;
	}
	else{
		int a = gora;
		cout << "Wyswietlanie stosu: " << endl << endl;
		while(a != -1){		//Wyswietlanie lementow stosu az do ostatniego elementu
			cout << tablica[a] << endl;
			a = a - 1;
		}
	return 0;
	}
}


//Umozliwia zastosowanie okreslonego typu
template class Stos<int>;
template class Stos<float>;
template class Stos<char>;
template class Stos<const char*>;
