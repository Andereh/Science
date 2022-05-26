#include <stdio.h>
#include <string.h>

/* Realizar un algoritmo para calcular el valor total de
 * una factura donde solo puedes comprar 4 productos 
 * teniendo en cuenta que:
 *
 * A. El 2do producto tiene un descuesto del 20%
 * B. El 3er producto esta a mitad de precio
 * C. El 4to producto tiene un incremento de 2 veces
 *      su valor MAS un impuesto del 5%
 *
 * Mostrar el nombre y cedula del cliente y el total a facturar.
 *
 * PD: Los impuestos se aplican al costo FINAL del producto. 
 */

char nombre[64];
int cedula;
float art1, art2, art3, art4, total;

int main()
{
    printf("En este lugar solo puede comprar 4 productos\n");
    printf("Elija sabiamente ya que todos menos el 1ro tiene modificaciones\n\n");

    printf("Nombre del cliente: ");
    fgets(nombre, 64, stdin);

    printf("Cedula del cliente: ");
    scanf("%d", &cedula);

    printf("\nMonto del art #1: "); scanf("%f", &art1);
    printf("Monto del art #2: "); scanf("%f", &art2);
    printf("Monto del art #3: "); scanf("%f", &art3);
    printf("Monto del art #4: "); scanf("%f", &art4);

    art2 *= 0.8;
    art3 /= 2;
    art4 = (art4 * 3) * 1.05;

    total = art1 + art2 + art3 + art4;

    printf("\nCliente: %s", nombre);
    printf("CI: %d\n\n", cedula);

    printf("Total a facturar: %.2f\n", total);

    return 0;

}
