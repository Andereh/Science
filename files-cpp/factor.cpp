#include <stdio.h>
#include <iostream>

#define ull unsigned long long


using namespace std;


bool is_prime(int number);
void next_divisor(int *,ull*);
string get_data(ull * base);

int nprimo = 2;
unsigned t0, t1;

int main()
{
    ull base; 
    string my_string;

    cout << "num a facorizar: ";
    scanf("%lld", &base);

    my_string = get_data(&base); // Toda la logica y lo "complicado" esta en mcm.h
    cout << "\nFatores primos: "<< my_string << "\n";

    fflush(stdin);
    getchar();

    return 0;
}


bool is_prime(int number)
{
    for (int i = 3; i < number/2; i += 2)
    {
        if (number%i == 0)
        {
            return false; 
        }
    }
    return true;
}


void next_divisor(int * _nprimo, ull* n)
{
    if (*_nprimo == 2)
    {
        *_nprimo = 3;
        return;
    }

	for (int i = *_nprimo + 2; i < *n / 2; i += 2) {
		if (*n%i == 0) {
			*_nprimo = i;
			return;
		}
	}
	
	*_nprimo = *n;
	return;
	
    

    //for (int dividendo = (*_nprimo + 2); true; dividendo += 2)
    //{
        //if (is_prime(dividendo))
        //{
            //*_nprimo = dividendo;
            //return;
        //}
    //}
}


string get_data(ull* base)
{
    bool as_change = false, has_been_divided = false;
    int nprimo = 2, pow_counter = 0;
    int pows [2][10];
    string data = "";


    while (*base > 1)
    {
        if (*base%nprimo == 0)
        {
            *base = *base / nprimo;
            if (as_change)
            {
                pow_counter = 0;
                as_change = false;
            }
            pow_counter++;

            has_been_divided = true;
        }
        else 
        {
            if (pow_counter != 0)
            {
                data += to_string(nprimo) + "^" + to_string(pow_counter) + " "; 
                pow_counter = 0;
            }
            as_change = true;
            next_divisor(&nprimo, base);
        }
    }


    if (has_been_divided)
    {
        data += to_string(nprimo) + "^" + to_string(pow_counter) + " ";
    }

    return data;
}
