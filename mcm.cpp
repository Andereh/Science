#include <iostream>
#include <ctime>
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

    t0 = clock();

    my_string = get_data(&base);
    cout << "Fator primo: "<< my_string;

    t1 = clock();

    double time = (double(t1-t0)/CLOCKS_PER_SEC) + 0.0001f;
    cout << "\n\nTardamos " << time << "s en completar";
    return 0;
}
