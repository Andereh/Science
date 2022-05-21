// 4) Realice un algoritmo que solicite a un usuario una contraseña, de forma repetitiva
// hasta que no introduzca la clave correcta debe indicarlo con un mensaje, de lo
// contrario si introduce la clave=”1234” le dé la BIENVENIDA 

#include <iostream>
#include <string>

using namespace std;

string claveOriginal = "1234";
string claveIntroducida;

int main(int argc, char const *argv[])
{
	do {
		cout << " Introduce la clave: "; cin >> claveIntroducida;
		if( claveOriginal != claveIntroducida)
		{
			cout << " Clave incorrecta!\n";
		}
	} while (claveOriginal != claveIntroducida);
	cout << " Bienvenido!\n";
	system("pause");
	return 0;
}