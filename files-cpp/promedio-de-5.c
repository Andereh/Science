#include <stdio.h>

/*
 * Realizar un algoritmo para promediar 5 cantidades
 */

float aux, result, sum = 0;
const int n = 5;

int main()
{
    printf("Programa para promediar %d numeros.\n\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("Valor #%d: ", i + 1);
        scanf("%f", &aux);
        sum += aux;
    }

    sum /= n;
    
    printf("\nPromedio final: %f\n", sum);
    return 0;
}
