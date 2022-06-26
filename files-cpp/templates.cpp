#include <cstdlib>
#include <iostream>
#include <stdarg.h>

using namespace std;

struct Nodo {
	private: // In clases everything is private by defatul, not in structs
		int a = 12;
		int b = 12;

	public:
		int sum() { // Internal inicialization
			return a+b;
		}

		void setValues(int, int); // function's Prototype
};

void Nodo::setValues(int _a, int _b) { // External inicialization
	a = _a;
	b = _b;
}

int main(int argc, char *argv[])
{
	struct Nodo *nd = (struct Nodo *)malloc( sizeof(struct Nodo) );
	int *a = (int*)malloc( sizeof(int) );

	nd->setValues(12, 12);

	int z = nd->sum();

	
	cout << z << "\n";

	return 0;
}
