#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int n = 5;
int V[n];

void carica()
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nInserire il valore da inserire: ";
        cin >> V[i];
    }
}

void caricarandom()
{
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        V[i] = rand()%100+1;
    }
}

void stampa()
{
    for (int i = 0; i < n; i++)
    {
        cout << V[i] << ", ";
    }
}

int contapari()
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (V[i]%2 == 0)
        {
            c++;
        }
    }
    return c;
}

int main()
{
    caricarandom();
    stampa();
    cout << "\nNumero dei pari: " << contapari();
}
