#include <iostream>
#include "mcm.h"

using namespace std;

int nprimo = 2;
unsigned t0, t1;

int main()
{
    int base; 
    string my_string;

    cout << "num a facorizar: ";
    cin >> base;

    my_string = get_data(&base); // Toda la logica y lo "complicado" esta en mcm.h
    cout << "\nFatores primos: "<< my_string << "\n";

    system("pause");

    return 0;
}
