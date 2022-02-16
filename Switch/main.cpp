#include <iostream>

using namespace std;

const int n = 10;
int arr[n] {};
int arr2[n] {};

int valoresottomedia = 0;

void carica()
{
    for (int i = 0; i < n; i++)
    {
        cout << "Inserire " << n << " numeri/o da inserire" << endl;
        cin >> arr[i];
    }
}

void stampa()
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

void media()
{
    int media;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            media = arr[i];
        }
        else
        {
            media = (media + arr[i]) / 2;
        }
        if (arr[i] < media)
        {
            valoresottomedia++;
        }
    }
    cout << "La media dei valori nell'array e': " << media << " e il numero dei valori sotto la media e': " << valoresottomedia << endl;

}

void moltiplica()
{
    int numero;
    cout << "Inserire il numero che verrà moltiplicato al valore contenuto" << endl;
    cin >> numero;


    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i] * numero;
        cout << arr2[i] << ", ";
    }
    cout << endl;
}

void minimo()
{
    int j = 0;
    int i = 0;
    int posA = 0;
    int posB = 0;
    int min = 100000;
    cout << "Inserire posA e posB" << endl;
    cin >> posA;
    cin >> posB;
    if (posA < posB)
    {
        i = posA;
        j = posB;
    }
    else if (posB < posA)
    {
        i = posB;
        j = posA;
    }
    for ( ; i < j; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Il minimo tra i valori dell'array e': " << min << endl;;
}

int main()
{
    int scelta = 0;
    cout << "Scelta 1: carica" << endl;
    cout << "Scelta 2: stampa" << endl;
    cout << "Scelta 3: media" << endl;
    cout << "Scelta 4: moltiplica" << endl;
    cout << "Scelta 5: minimo" << endl;

    do
    {
        cout << "Inserire una scelta" << endl;
        cin >> scelta;
        switch (scelta)
        {
            case 0:
                break;

            case 1:
                carica();
                break;

            case 2:
                stampa();
                break;

            case 3:
                media();
                break;

            case 4:
                moltiplica();
                break;

            case 5:
                minimo();
                break;

            default:
                cout << "Errore nella scelta" << endl;
        }
    } while (scelta != 0);
    return 0;
}
