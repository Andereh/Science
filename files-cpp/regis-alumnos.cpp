#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

string myString;
int aprobados = 0, reprobados = 0;
string nota;

bool isOnlyNumbers(string text)
{
	string c;
	for (int i = 0; i < text.length(); ++i)
	{
		c = text[i];
		if(c < "0" || c > "9") return false;
	}
	return true;
}


int main(int argc, char const *argv[])
{
	do
	{
		cout << "Introduce la cantidad de alumnos a evaluar: "; cin >> myString ;
		if(!isOnlyNumbers(myString)) cout << "Solo debe ingresar numeros.\n";
		else break;
	} while(true);

	for (int i = 1; i <= atoi(myString.c_str()); ++i)
	{
		do
		{
			printf("Alumno (%d): ", i);
			cin >> nota;
			if(!isOnlyNumbers(nota)) printf("Solo ingrese enteros.\n\n");
			else break;
		} while (true);

		if (atoi(nota.c_str()) < 10) reprobados++;
		else aprobados++;
	}
	printf("Alumnos aprobados: %d\n", aprobados);
	printf("alumnos reprobados: %d\n", reprobados);
	system("pause");
	return 0;
}
// old
