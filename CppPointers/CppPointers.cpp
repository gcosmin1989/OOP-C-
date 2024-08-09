// CppPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n = 5;
	cout << &n << endl;
	// `&n` returnează adresa la care este stocată variabila `n` în memorie.

	int* n_ptr = &n;
	// Acum `n_ptr` conține adresa de memorie a variabilei `n`.

	cout << n_ptr << endl;
	// Afișează valoarea pointerului `n_ptr`, care este adresa de memorie la care se află variabila `n`.
	// Aceasta ar trebui să fie aceeași adresă afișată de `cout << &n << endl;`.

	cout << *n_ptr << endl;
	// Afișează valoarea la care pointează `n_ptr` folosind operatorul de dereferențiere `*`.
	// Deoarece `n_ptr` pointează la `n`, `*n_ptr` va afișa valoarea stocată în `n`, adică 5.

	*n_ptr = 10;
	cout << n_ptr << " n_ptr"<< endl;
	cout << *n_ptr << " *n_ptr" << endl;
	cout << &n << " &n" << endl;
	cout << n << " n" << endl;
	


	

}
