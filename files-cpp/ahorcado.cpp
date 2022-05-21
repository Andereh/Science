#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <random>
#include <math.h>

using namespace std;

const string lista_de_palabras[] = {"banana", "mango", "sandia", "melocoton"};
string palabra, palabra_incognita = "", letras_usadas = "";
char letra;
int vidas = 9;
bool has_ganado = false;


void start()
{
	system("cls");
	srand(GetTickCount());               // Eligiendo una palabra aleatoria.
	int index = floor(rand() % sizeof(lista_de_palabras)/sizeof(*lista_de_palabras));       //...
	palabra = lista_de_palabras[index];  //...
	
	for (int i = 0; i < palabra.length(); ++i)
	{
		palabra_incognita += "-";  // <-- Ocultando las letras.
	   	palabra[i] -= 32;          // <-- Convirtiendo los caracteres de la palabra
		                           //     a mayusculas internamente sin modificar la original.
	}
}

void mostrar_info(){
	printf("Vidas: %d\n", vidas);

	for(int i = 0; i < palabra.length(); i++)   
	{
		printf("%s", palabra_incognita[i]); //Mostrando la palabra oculta
	}
	printf("\n");
}

char pedir_letra()
{
	char letra;
	printf("Dime una letra: "); scanf("%s", &letra);
	return letra;
}

void intentar_letra(char l)
{
	bool acertada = false;
	system("cls");
	letras_usadas += l; // Registro de las letras usadas
	if 	( l >= 97 || l <= 122) 
	{
		l -= 32; // Si es una LETRA minuscula se convierte a MAYUSCULAS
	}

	// Verificando si la letra ya fue usada
	for (char Letra : letras_usadas)
	{
		if (l == Letra)
		{
			cout << "Ya usaste la letra: " << l << endl;
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

	if (acertada == false)
	{
		cout << "Has fallado la letra" << endl;
		vidas--;
	} 
}

bool validar_victoria()
{
	bool palabra_completa = true;
	for (int i = 0; i < palabra_incognita.length(); i++)
	{
		if (palabra_incognita[i] == '-')
		{
			palabra_completa = false;
			break;
		}
	}
	
	if(vidas == 0)
	{
		return false;
	} else if(palabra_completa)
	{
		has_ganado = true;
		return true;
	}
	return false;
}

int main(int argc, char const *argv[])
{
	
	start();
	mostrar_info();
	letra = pedir_letra();
	intentar_letra(letra);
	do {
		 // system("cls"); 
		mostrar_info();
		cout << "Caracteres usados: " << letras_usadas << endl;
		letra = pedir_letra();
		intentar_letra(letra);		
	} while(validar_victoria());

	if (has_ganado)
	{
		cout << "Felicidades! Has ganado :D";
	} else 
	{
		cout << "Lo siento, has fallado en tu mision :('";
	}

	
	return 0;
}
