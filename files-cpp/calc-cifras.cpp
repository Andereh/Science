#include <iostream>
#include <string.h>

using namespace std;

int num, n_cifras;

int main() {
	cout << "Programa que te dice cuantas cifras tiene un numero\n";
	cout << "Ingrese un numero: ";
	cin >> num;
	
	while (num < 1) {
		cout << "El numero debe ser positivo, intenta otro: ";
		cin >> num;
	}

	n_cifras = to_string(num).length();
	
	cout << "El numero tiene " << n_cifras << " cifras\n";
	
	return 0;
}
