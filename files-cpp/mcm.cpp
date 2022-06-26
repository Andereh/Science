#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
	int* values, valuesSize;
	bool div;

	cout << "Valores a evaluar: ";
	cin >> valuesSize;

	values = new int[valuesSize];

	for (int i = 0; i < valuesSize; ++i) {
		printf("Valor #%d/%d: ", i+1, valuesSize);
		cin >> values[i];
	}

	sort(values, values + valuesSize);

	for (int i = values[0]; i > 1 ; i--) {
		div = true;
		for (int j = 0; j < valuesSize; j++) {
			if (values[j]%i != 0) {
				div = false;
				break;
			}
		}

		if (div) {
			cout << i << '\n';
			return 0;
		}
	}

	cout << "Estor valores no tienes un mimimo comun multiplo\n";
	return 0;
}
