#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream>

using namespace std;

const int n = 10;
string titoli[n] {};
int prezzi[n] {};
int quantita[n] {};
int costototale = 0;

void carica()
{
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        std::ostringstream oss;
        quantita[i] = rand()%11+1;
        prezzi[i] = rand()%31+10;
        oss << "Libro numero " << i+1;
        titoli[i] = oss.str();
    }
}

void compra()
{
    int librocomprato = 0;
    int quantitacomprata = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Titoli del libro: " << titoli[i] << endl;
        if (quantita[i] >= 1)
        {
            cout << "Quantita' disponibile: " << quantita[i] << ". Costo: " << prezzi[i] << endl;
        }
        else
        {
            cout << "Libro non disponibile" << endl;
        }
    }
    cout << "Inserire il numero identificativo del libro da comprare" << endl;
    cin >> librocomprato;
    cout << "Inserire la quantita' desiderata" << endl;
    cin >>  quantitacomprata;
    if (quantitacomprata > quantita[librocomprato-1])
    {
        cout << "La quantita' desiderata e' superiore a quella disponibile" << endl;
    }
    else
    {
        quantita[librocomprato-1] = quantita[librocomprato-1] - quantitacomprata;
        int costoparziale = prezzi[librocomprato-1]*quantitacomprata;
        costototale = costototale+costoparziale;
    }
    cout << "Il costo e' attualmente di: " << costototale << " euro" << endl;



}

int main()
{
    int contatore = 0;
    carica();
    cout << "\nInserire 0 per uscire, inserire 1 per iniziare a comprare" << endl;
    int scelta = 0;
    do
    {
        if (contatore == 0)
        {
            cout << "Inserire una scelta" << endl;
        }
        else
        {
            cout << "Inserire 0 per uscire, inserire 1 per continuare" << endl;
        }
        cin >> scelta;
        switch (scelta)
        {
            case 0:
                break;

            case 1:
                compra();
                contatore++;
                break;
        }
    } while (scelta != 0);

    cout << "Il costo totale e' di: " << costototale << " euro" << endl;


    return 0;
}
