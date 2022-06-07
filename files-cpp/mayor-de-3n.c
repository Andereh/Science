#include <stdio.h>

/*
 * Realizar un programa para determinar el mayor de tres cantidades
 */

int a, b, c;

int main()
{
    printf("Programa para determinar el mayor de tres cantidades\n\n");

    printf("Valor #1: "); scanf("%d", &a);
    printf("Valor #2: "); scanf("%d", &b);
    printf("Valor #3: "); scanf("%d", &c);

    if (a > b && a > c) printf("\n%d es el mayor\n", a);
    else if (b > c)     printf("\n%d es el mayor\n", b);
    else                printf("\n%d es el mayor\n", c);

    return 0;
}
