// 1) Un profesor tiene un salario inicial de $1500, y recibe un incremento de 10 % anual
// durante 6 años. ¿Cuál es su salario al cabo de 6 años? ¿Qué salario ha recibido en
// cada uno de los 6 años? Realice el algoritmo utilizando el ciclo apropiado.

#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int salarioInicial = 1500;

	printf("Salario inicial %d$\n", salarioInicial);

	for (int i = 1; i <= 6; ++i)
	{
		salarioInicial *= 1.1;
		printf("Salario al anno %d: %d$\n", i, salarioInicial); // anno = año
	}

	system("pause");
	return 0;
}
// modify
// old
