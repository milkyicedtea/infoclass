// Scrivere un programma che legge 2 orari in ore minuti e secondi e dice quale viene prima dei due.

#include <iostream>

using namespace std;

const int n = 2;

int ore[n] {};
int minuti[n] {};
int secondi[n] {};
int i = 0;

int main()
{
    cout << "Inserire il primo orario" << endl;

    for (i = 0; i < n; i++)
    {
        if (i == 1)
        {
            cout << "Inserire il secondo orario" << endl;
        }
        cout << "Inserire le ore" << endl;
        cin >> ore[i];
        cout << "Inserire i minuti" << endl;
        cin >> minuti[i];
        cout << "Inserire i secondi" << endl;
        cin >> secondi[i];
    }

    if (ore[0] == ore[1]) //ore uguali
    {
        if (minuti[0] == minuti[1]) //minuti uguali
        {
            if (secondi[0] == secondi[1]) //secondi uguali
            {
                cout << "Gli orari sono uguali!" << endl;
            }
            else if (secondi[0] < secondi[1]) //secondi0 minore secondi1
            {
                cout << "Il primo orario (" << ore[0] << ":" << minuti[0] << ":" << secondi[0] << ") viene prima del secondo" << endl;
            }
            else if (secondi[1] < secondi[0]) //secondi1 minori secondi0
            {
                cout << "Il secondo orario (" << ore[1] << ":" << minuti[1] << ":" << secondi[1] << ") viene prima del primo" << endl;
            }
        }
        else if (minuti[0] < minuti[1]) //minuti0 minore minuti1
        {
            cout << "Il primo orario (" << ore[0] << ":" << minuti[0] << ":" << secondi[0] << ") viene prima del secondo" << endl;
        }
        else if (minuti[1] < minuti[0]) //minuti1 minore minuti 0
        {
            cout << "Il secondo orario (" << ore[1] << ":" << minuti[1] << ":" << secondi[1] << ") viene prima del primo" << endl;
        }
    }
    else if (ore[0] < ore[1]) //ora0 minore ora1
        {
            cout << "Il primo orario (" << ore[0] << ":" << minuti[0] << ":" << secondi[0] << ") viene prima del secondo" << endl;
        }
    else if (ore [1] < ore[0]) //ora1 minore ora0
        {
            cout << "Il secondo orario (" << ore[1] << ":" << minuti[1] << ":" << secondi[1] << ") viene prima del primo" << endl;
        }

    return 0;
}