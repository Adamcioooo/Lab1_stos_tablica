#include <iostream>
#include <chrono>
#include "stos.hh"
using namespace std;

int main() {

	chrono::steady_clock::time_point begin = chrono::steady_clock::now(); //Poczatek mierzenia czasu
	Stos <int> S;

	int a = 1;
	for (int i = 1; i <= 10000; i++){

		a = a + 1;
		S.push(a);
	}








	chrono::steady_clock::time_point end = chrono::steady_clock::now();
	//koniec mierzenia czasu
	cout << endl << endl;

	cout << "Time = " << chrono::duration_cast<chrono::seconds>(end - begin).count() << " [us]  10^(-6)s" << endl;
	cout << "Time = " << chrono::duration_cast<chrono::milliseconds>(end - begin).count() << " [us]  10^(-6)s" << endl;
	cout << "Time = " << chrono::duration_cast<chrono::microseconds>(end - begin).count() << " [us]  10^(-6)s" << endl;
	cout << "Time = " << chrono::duration_cast<chrono::nanoseconds> (end - begin).count() << " [ns]  10^(-9)s" << endl;







	   return 0;
}
