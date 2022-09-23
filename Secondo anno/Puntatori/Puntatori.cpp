// Puntatori.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cstdlib>

using namespace std;

int x = 1;
int y = 2;
int z = 3;

int *pointer1 = &x;
int *pointer2 = &y;
int *pointer3 = &z;

void maggiore()
{
    if (*pointer1 > *pointer2)
    {
        if (*pointer1 > *pointer3)
        {
            cout << "Il puntatore maggiore e': pointer1 con valore " << *pointer1 << endl;
        }
        else
        {
            cout << "Il puntatore maggiore e': pointer3 con valore " << *pointer3 << endl;
        }
    }
    else
    {
        if (*pointer2 > *pointer3)
        {
            cout << "Il puntatore maggiore e': pointer2 con valore " << *pointer2 << endl;
        }
        else
        {
            cout << "Il puntatore maggiore e': pointer3 con valore " << *pointer3 << endl;
        }
    }
}

int main()
{
    maggiore();
    return 0;
}
