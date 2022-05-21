// Hacer el ejercicio 2 implementando un bucle while

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

char tipoHamburguesa;
int hambSencillas = 0, hambDobles= 0, hambTriples = 0;
int cantidadHamb;
int cuentaTotal = 0;	
string pagoConTarjeta;

 int main(int argc, char const *argv[])
 {
 	cout << "\n    Bienvenido al Naufrago Satisfecho\n\n";
 	cout << " Menu: \n";
 	cout << "     Hamburguesa Sencilla(S) 20$\n";
 	cout << "     Hamburguesa Doble(D) 25$\n";
 	cout << "     Hamburguesa Triple(T) 28$\n\n";
 	cout << " Su orden: \n";

 	do {
		cout << "     Cantidad: "; scanf("%1d", &cantidadHamb);
		if(cantidadHamb == 0)
		{
			break;
		}
 		cout << "     Tipo de Hamburguesa: "; scanf("%1s", &tipoHamburguesa);

 		switch((int)tipoHamburguesa)
 		{
	 		case 115: // s 
	 			hambSencillas += cantidadHamb;
	 			if (hambSencillas > 3)
	 			{
	 				cout << "\nNo puedes ordenar mas de 3 hamburguesas de este tipo";
	 				hambSencillas = 3;
	 			}
	 		break;
	 		case 100: // d
	 			hambDobles += cantidadHamb;
	 			if (hambDobles > 3)
	 			{
	 				cout << "\nNo puedes ordenar mas de 3 hamburguesas de este tipo";
	 				hambDobles = 3;
	 			}
	 		break;
	 		case 116: // t
	 			hambTriples += cantidadHamb;
	 			if (hambTriples > 3)
	 			{
	 				cout << "\nNo puedes ordenar mas de 3 hamburguesas de este tipo";
	 				hambTriples = 3;
	 			}
	 		break;
	 		default:
	 			printf("\nEste tipo de hamburguesa no esta en el menu\n");
 		}
 	} while (cantidadHamb != 0);

 	cuentaTotal = (hambSencillas * 20) + (hambDobles * 25) + (hambTriples * 28);


 	if(cuentaTotal != 0)
 	{
 		cout << " Desea pagar con tarjeta de credito? "; cin >> pagoConTarjeta;
 		if(pagoConTarjeta[0] == 's')
 		{
 			cuentaTotal *= 1.05;
 		}

 		printf(" Total a pagar: %d$\n", cuentaTotal);
 		cout << " Gracias por su compra!";
 	} else
 	{
 		cout << " \nLamentamos que no le haya gustado nuestro menu :(\n";
 	}
 	
 	system("pause");
 	
 	return 0;
 }