#include <stdio.h>

/*
 * Realizar un programa que dado dos limites identifique si un valor esta
 * por debajo, por arriba o dentro de el rango
 */

int num, low_range, sup_range;

int main()
{
    printf("Ingrese el rango inferior: ");
    scanf("%d", &low_range);
    printf("Ingrese el rango superior: ");
    scanf("%d", &sup_range);

    if (low_range < sup_range)
    {
        printf("\nNumero a evaluar: ");
        scanf("%d", &num);

        if (num < low_range)
            printf("\nNumero fuera de rango, esta por debajo del minimo\n");
        else if (num > sup_range)
            printf("\nNumero fuera de rango, esta por arriba del maximo\n");

        else printf("\nCorrecto. El numero cumple con los estandares\n");

    } else 
    {
        printf("\nNo, el limite inferior no puede ser mayor que el superior\n");
    }

    return 0;
}
