#include <cmath>
#include <iostream>
#include <math.h>

using namespace std;

int n;

int main() {
	cout << "Que numero quieres descomponer: ";
	cin >> n;

	while (n < 1) {
		cout << "El numero debe ser positivo, intenta otro: ";
		cin >> n;
	}

	for (int i = 0; n > 0; i++) {
		cout << n%10 * pow(10, i) << "\n";
		n /= 10;
	}

	return 0;
}
