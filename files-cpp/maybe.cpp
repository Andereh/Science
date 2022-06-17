#include <iostream>

using namespace std;

int num, cas_selec, n_selec, num_len = 1;
int aux_num;

/*
 * num = numero con el que trabajaremos
 * cas_selec = casilla selecciona por el usuario
 * n_selec = numero posicionado en cas_selec
 * num_len = longitud/length del numero
 * aux_num = numero auxiliar
 */

int main() {
    cout << "Introduce el numero que quieras: ";
	cin >> num;

	while (num < 1) {
		cout << "Debe ser positivo, intenta otro: ";
		cin >> num;
	}

	aux_num = num;

	// Utilizamos aux_num para obtener la longitud sin modificar el valor original

	while (aux_num >= 10) {
		aux_num = (int)aux_num / 10;
		num_len++;
	}

	cout << "\n";

	do {
		printf("Selecciona un numero entre 1 y %d: ", num_len);
		cin >> cas_selec;
	} while (cas_selec < 1 || cas_selec > num_len);

	n_selec = num;


	for (int i = 1; i < cas_selec; i++) {
		n_selec = (int)n_selec / 10;
	}

	n_selec = n_selec % 10;

	printf("El numero en la posicion %d es el %d\n", cas_selec, n_selec);

	return 0;
}
