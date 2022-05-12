#include <iostream>
#include <string>

using namespace std;


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


void next_primo(int * _nprimo)
{
    if (*_nprimo == 2)
    {
        *_nprimo = 3;
        return;
    }
    

    for (int dividendo = (*_nprimo + 2); true; dividendo += 2)
    {
        if (is_prime(dividendo))
        {
            *_nprimo = dividendo;
            return;
        }
    }
}


void rellenar(int * n)
{
    int sep = 5;
    string str_n = to_string(*n);
    int n_spaces = sep - str_n.length();

    for (int i = 0; i < n_spaces; i++) cout << ' ';
    cout << *n << " | ";
}

string get_data(int* base)
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
            next_primo(&nprimo);
        }
    }

    if (has_been_divided)
    {
        data += to_string(nprimo) + "^" + to_string(pow_counter) + " ";
    }

    return data;
}




