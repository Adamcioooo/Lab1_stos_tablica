
#include <iostream>
#include "stos.hh"
using namespace std;


template <class T>
bool Stos<T>::push(T a){
	if(gora >= (ZAKRES - 1)){
		cout << "Stos jest przepelniony!" << endl;
		return false;
	}
	else{
		gora = gora + 1;
		tablica[gora] = a;
		cout << "Wstawiono na stos:  " << tablica[gora] << endl;
		return true;
	}
}


template <class T>
T Stos<T>::pop(){
	if(gora < 0){
		cout << "Stos jest ju¿ pusty!" << endl;
		return 0;
	}
	else{
		gora = gora - 1;
		T z = tablica[gora];
		return z;
	}
}
template <class T>
T Stos<T>::top(){
	if(gora < 0){
		cout << "Stos jest pusty" << endl;
		return 0;
	}
	else{
		T x = tablica[gora];
		return x;
	}
}

template <class T>
bool Stos<T>::isEmpty(){
	return ( gora < 0);
}


template <class T>
int Stos<T>::delate(){
	while(!isEmpty()){
		pop();
	}
	return 0;
}
template <class T>
int Stos<T>::view(){
	int a = gora;
	cout << "Wyswietlanie stosu: " << endl << endl;
	while(a != -1){
		cout << tablica[a] << endl;
		a = a - 1;
	}
	return 0;
}

template class Stos<int>;
template class Stos<float>;
template class Stos<char>;
template class Stos<const char*>;
