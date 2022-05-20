#include <iostream>
#include <math.h>

#define PI 3.1415926535

using namespace std;

int main()
{
    float r, h, result;

    cout << "Altura del cilindro: ";
    cin >> h;

    cout << "Radio: ";
    cin >> r;

    result = pow(r, 2) * PI * h;
    cout << "Area: " << result << "\n";
}
