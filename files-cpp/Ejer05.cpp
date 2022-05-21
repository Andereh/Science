// 5) Realice un algoritmo que pueda determinar cuánto ahorrará una persona en un año,
// si al final de cada mes deposita una cantidad equis en dinero, también, se desea saber
// cuánto tiene ahorrado mensualmente.

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int dineroAhorrado = 0, ahorroDelMes;

int main(int argc, char const *argv[])
{
	printf(" Bienvenido a la caja de ahorros.\n\n");
	for (int i = 1; i <= 12; ++i)
	{
		printf(" Cantidad a depositar: "); scanf("%d", &ahorroDelMes);
		dineroAhorrado += ahorroDelMes;
		//printf("%d\n", ahorroDelMes);
		printf(" Suma de ahorros en el mes %d: %d$\n\n", i, dineroAhorrado);
	}
	printf(" Ahorros totales: %d$\n ", dineroAhorrado);
	system("pause");
	return 0;
}// old
