#include <stdio.h>

/*
 * Realizar un algoritmo para resolver un producto 
 * notable de la forma (a+b)^2
 */

int a, b, x;

int main()
{
    printf("Programa para resolver producto notable\n\n");
    printf("Valor de a: "); scanf("%d", &a);
    printf("Valor de b: "); scanf("%d", &b);

    x = (a+b) * (a+b);

    printf("\nResultado: %d\n", x);
    return 0;
}
