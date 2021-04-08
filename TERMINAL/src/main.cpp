#include <iostream>
#include <chrono>
#include "stos.hh"
using namespace std;

int main() {

	Stos <int> S;
	int a = 0;		//Zmienna umozliwiajaca wybor odpowieniej opcji

	cout << "Wybierz opcje: " << endl << endl;
	cout << "1 - Driver" << endl;
	cout << "2 - Test szybkosci programu" << endl << endl;
	cin >> a;
	while((a != 1)&&(a != 2)){
		cout << endl;
		cout << "!!!! Podano zla opce !!!!" << endl;
		cout << "Wybierz opcje: " << endl << endl;
		cout << "1 - Driver" << endl;
		cout << "2 - Test szybkosci programu" << endl << endl;
		cin >> a;

	}
					//DRIVER
	if (a == 1){
		S.push(5);											//Wstawianie elementow na stos
		S.push(4);
		S.push(6);
		S.push(7);
		S.push(8);
		cout << "Usunieto z stosu:  " << S.top() << endl;
		S.pop();											//Usuwanie lementow z stosu
		cout << endl;
		S.view();											//Sprawdzenie zawartosci stosu
		cout << endl;
		cout << "Na szczycie jest:  " << S.top() << endl << endl;	//Sprawdzenie elementu na samej gorze
		S.delate();													//Usuniecie wszystkich elementow z stosu
		cout << endl;
		S.view();											//Sprawdzenie zawartosci stosu
	}
					//TEST TRWANIA ALGORYTMU
	else {

		int zakres = 0;
		cout << "Podaj zakres: ";
		cin >> zakres;
		int a = 1;
		//Poczatek mierzenia czasu
		chrono::steady_clock::time_point begin = chrono::steady_clock::now();
		for (int i = 1; i <= zakres; i++){

			a = a + 1;
			S.push(a);		//	Wstawianie okreslonej ilosci elemento na stos
		}					//	w celu sprawdzenia czasu dzialania algorytmu

		//Koniec mierzenia czasu
		chrono::steady_clock::time_point end = chrono::steady_clock::now();

		cout << endl << endl;

		//Wyswietlanie czasu dzialania programu
		cout << "Time = " << chrono::duration_cast<chrono::seconds>(end - begin).count() << " [s]  10^(-6)s" << endl;
		cout << "Time = " << chrono::duration_cast<chrono::milliseconds>(end - begin).count() << " [ms]  10^(-6)s" << endl;
		cout << "Time = " << chrono::duration_cast<chrono::microseconds>(end - begin).count() << " [us]  10^(-6)s" << endl;
		cout << "Time = " << chrono::duration_cast<chrono::nanoseconds> (end - begin).count() << " [ns]  10^(-9)s" << endl;
	}







	   return 0;
}
