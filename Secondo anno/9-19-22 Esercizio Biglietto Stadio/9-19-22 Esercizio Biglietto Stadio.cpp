// 9-19-22 Esercizio Biglietto Stadio.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int N = 10;

struct Biglietto
{
    string codie_fiscale;
    int anello;
    char zona;
    string settore;
    char orientamento;
    int posto;
};

Biglietto arr[N]{};
int totale_biglietti = 0;

void carica(int index)
{
    cout << "\nInserire codice fiscale: ";
    cin >> arr[index].codie_fiscale;
    cout << "\nInserire anello: ";
    cin >> arr[index].anello;
    cout << "\nInserire zona: ";
    cin >> arr[index].zona;
    cout << "\nInserire settore: ";
    cin >> arr[index].settore;
    cout << "\nInserire orientamento: ";
    cin >> arr[index].orientamento;
    cout << "\nInserire posto: ";
    cin >> arr[index].posto;
}

void stampa(int index)
{
    if (index-1 <= 0 or totale_biglietti == 0)
    {

    }
    cout << "\nCodice fiscale: ";
    cout << arr[index].codie_fiscale;
    cout << "\nAnello: ";
    cout << arr[index].anello;
    cout << "\nZona: ";
    cout << arr[index].zona;
    cout << "\nSettore: ";
    cout << arr[index].settore;
    cout << "\nOrientamento: ";
    cout << arr[index].orientamento;
    cout << "\nPosto numero: ";
    cout << arr[index].posto;
    totale_biglietti++;
}

int main()
{
    int scelta;

    do
    {
        switch (scelta)
        {
            case 0:
                break;

            case 1:
                int index = 0;
                cout << "Inserire il numero del biglietto ";
                cin >> index;
                carica(index);
                break;

            case 2:
                int index = 0;
                cout << "Inserire il numero del biglietto ";
                cin >> index;
                stampa(index);

            default:
                scelta = 0;
                break;
        }
    } while (scelta != 0);
}