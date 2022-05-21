// 9) Realice un algoritmo para obtener la tabla de multiplicar de un entero K
// comenzando desde el 1.

#include <cstdio>
#include <stdlib.h>
using namespace std;

int k;

int main(int argc, char const *argv[])
{
	printf("Introduce un entero: "); scanf("%d", &k);
	for (int i = 1; i <= 10; ++i)
	{
		printf("%dx%d=%d\n", k, i, k*i);
	}
	system("pause");
	return 0;k
}