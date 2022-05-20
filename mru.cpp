#include <iostream>
#include <dos.h>

using namespace std;

int main()
{
    float d, v, t;
    cout << "Distancia a recorrer(mts): ";
    cin >> d;

    cout << "Velocidad a la que viajas(mts/s): ";
    cin >> v;

    t = d/v;

    cout << "Tardaras " << t << "s en llegar\n";

}
