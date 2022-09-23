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

    totale_biglietti++;
}

void stampa(int index)
{
    if (index-1 < 0 or totale_biglietti == 0)
    {
        cout << "Non esistono abbastanza biglietti oppure il numero del biglietto e' minore di 0 riprovare con un biglietto esistente" << endl;
        return;
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
    int index = 0;
    int giri = 0;

    do
    {
        cout << "Inserire 0 per uscire;\nInserire 1 per inserire i dati del biglietto;\nInserire 2 per inserire stampare i dati del biglietto" << endl;
        cin >> scelta;
        giri++;
        switch (scelta)
        {
            case 0:
                break;

            case 1:
                cout << "Inserire il numero del biglietto ";
                cin >> index;
                carica(index);
                break;

            case 2:
                cout << "Inserire il numero del biglietto ";
                cin >> index;
                stampa(index);
                break;

            default:
                cout << "L'istruzione inserita e' impossibile da eseguire. Programma in chiusura" << endl;
                scelta = 0;
                break;
        }
    } while (scelta != 0 && giri >= 1);
}