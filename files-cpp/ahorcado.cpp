#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string.h>
#include <random>
#include <math.h>

using namespace std;

string lista_de_palabras[] = {"banana", "mango", "sandia", "melocoton", "guayaba", "yuca", "pepino"};
string palabra, palabra_incognita = "", letras_usadas = "";
char letra;
int vidas = 9;
bool has_ganado = false;


void start()
{
	system("clear");
	srand(time(NULL));               // Eligiendo una palabra aleatoria
	int index = floor(rand() % (sizeof(lista_de_palabras)/sizeof(*lista_de_palabras)));       //...
	palabra = lista_de_palabras[index];  //...
	
	for (int i = 0; i < palabra.length(); ++i)
	{
		palabra_incognita += "-";  // <-- Ocultando las letras.
	   	palabra[i] -= 32;          // <-- Convirtiendo los caracteres de la palabra
	}	                           //     a mayusculas internamente sin modificar la original.
}


void mostrar_info(){
	cout << "Vidas: " << vidas << "\n\n  ==> ";

	for (char Letra : palabra_incognita) cout << Letra; // imprime la palabra con guiones
	cout << "\n\n";
}


char pedir_letra()
{
	char letra;
	printf("Dime una letra: "); scanf("%s", &letra);
	return letra;
}


void intentar_letra(char l)
{
	bool ya_fue_usada = false, acertada = false;

	if 	( l >= 97 || l <= 122) l -= 32; // Si es una LETRA minuscula se convierte a MAYUSCULAS


	// Verificando si la letra ya fue usada
	for (char Letra : letras_usadas)
	{
		if (l == Letra)
		{
			cout << "Ya usaste la letra: " << l << "\n";
			ya_fue_usada = true;
			break;
		}
	}	


	// Comprobando si se intrudujo una letra correcta
	for(int i = 0; i < palabra.length(); i++) 
	{
		if ( l == palabra[i] )
		{
			palabra_incognita[i] = l; 
			acertada = true;
		}
	}


	if (!ya_fue_usada) letras_usadas += l; // Si no se ha usado agregala al registro de letras
	if (!acertada && !ya_fue_usada) vidas--; // si no le atinaste se te resta una vida
}

bool seguimos_jugando()
{
	bool adivinaste_la_palabra = true;

	for (char Letra : palabra_incognita)
	{
		if (Letra == '-') adivinaste_la_palabra = false;
	}
	
	
	if(vidas < 1) return false; // Si no te quedan vidas termina el juego


	else if(adivinaste_la_palabra) // pero si adivinaste la palabra termina el juego ...
	{
		has_ganado = true; // ... y se indica que ganaste
		return false;
	}

	return true; // si ninguna de las condiciones anteriores ocurre pues sigue jugando
}

int main(int argc, char const *argv[])
{
	start();
	mostrar_info();
	letra = pedir_letra();
	intentar_letra(letra);

	do {
		system("clear"); 
		mostrar_info();
		cout << "Caracteres usados: " << letras_usadas << endl;
		letra = pedir_letra();
		intentar_letra(letra);		
	} while(seguimos_jugando());

	if (has_ganado) cout << "\nCorrecto! La palabra era\n ===>  " << palabra << "\n";
	else 
	{
		cout << "\nEnserio? Era tan facil! Solo tenias que decir\n ===>  " << palabra << "\n";
	}
	
	return 0;
}

