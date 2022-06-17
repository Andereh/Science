#include <cstdio>
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int num, cas_selec, num_len;
string resp;


int main() {
    cout << "Introduce el numero que quieras: ";
	cin >> num;

	while (num < 1) {
		cout << "Debe ser positivo, intenta otro: ";
		cin >> num;
	}
	
	resp = to_string(num);
	num_len = resp.length();

	cout << "\n";

	do {
		printf("Selecciona un numero entre 1 y %d: ", num_len);
		cin >> cas_selec;
	} while (cas_selec < 1 || cas_selec > num_len);

	printf("El numero en la posicion %d es %c\n", cas_selec, (char)resp[cas_selec-1]);

	return 0;
}
