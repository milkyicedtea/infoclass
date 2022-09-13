#include <iostream>

using namespace std;

struct libro
{
    string titolo;
    string autore;
    string editore;
    string genere;
    int npagine = 0;
    float prezzo = 0;
};

libro libro1;
libro libro2;
libro libro3;

void carica(libro &l)
{
    cout << "\nInserire il titolo del libro." << endl;
    cin >> l.titolo;
    cout << "\nInserire l'autore del libro." << endl;
    cin >> l.autore;
    cout << "\nInserire l'editore del libro." << endl;
    cin >> l.editore;
    cout << "\nInserire il genere del libro." << endl;
    cin >> l.genere;
    cout << "\nInserire il numero di pagine del libro." << endl;
    cin >> l.npagine;
    cout << "\nInserire il prezzo del libro." << endl;
    cin >> l.prezzo;
}

void stampa(libro l)
{
    cout << "Titolo: " << l.titolo << endl;
    cout << "Autore: " << l.autore << endl;
    cout << "Editore: " << l.autore << endl;
    cout << "Genere: " << l.genere << endl;
    cout << "Numero di pagine: " << l.npagine << endl;
    cout << "Prezzo: " << l.prezzo << endl;
}

float prezzoMassimo(libro a, libro b, libro c)
{
    float prezzoMax = 0;
    if (a.prezzo > b.prezzo)
    {
        prezzoMax = a.prezzo;
    }
    else
    {
        prezzoMax = b.prezzo;
    }

    if (prezzoMax < c.prezzo)
    {
        prezzoMax = c.prezzo;
    }

    return prezzoMax;
}

float spesaTotale(libro a, libro b, libro c)
{
    float spesaTot = a.prezzo + b.prezzo + c.prezzo;
    return spesaTot;
}

float prezzoMinimo(libro a, libro b, libro c)
{
    float prezzoMin = 0;
    if (a.prezzo < b.prezzo)
    {
        prezzoMin = a.prezzo;
    }
    else
    {
        prezzoMin = b.prezzo;
    }
    if (prezzoMin > c.prezzo)
    {
        prezzoMin = c.prezzo;
    }

    return prezzoMin;
}

int main()
{
    int scelta = 0;
    int caricati = 0;
    bool esci = false;

    do
    {
        cout << "Inserire un libro da caricare nel sistema (1-3)." << endl;
        cin >> scelta;
        switch (scelta)
        {
            case 1:
                carica(libro1);
                scelta = 0;
                caricati++;
                break;

            case 2:
                carica(libro2);
                scelta = 0;
                caricati++;
                break;

            case 3:
                carica(libro3);
                scelta = 0;
                caricati++;
                break;

            default:
                cout << "Il numero inserito non era compreso nel range dato." << endl;
                caricati++;
                scelta = 0;
        }
        if (caricati >= 2)
        {
            int scelta3 = 0;
            cout << "Inserire 1 per continuare ad inserire libri;\nInserire 2 per andare avanti" << endl;
            cin >> scelta3;

            switch (scelta3)
            {
            case 1:
                esci = false;
                break;

            case 2:
                esci = true;
                break;

            default:
                break;
            }
        }
    } while (esci == false);

    if (caricati >= 2)
    {
        int scelta2 = 0;
        cout << "Inserire 1 per conoscere il prezzo massimo;\nInserire 2 per conoscere la spesa totale;\n Inserire 3 per conoscere il prezzo minimo" << endl;;
        cin >> scelta2;
        switch (scelta2)
        {
            case 1:
                cout << prezzoMassimo(libro1, libro2, libro3);
                break;

            case 2:
                cout << spesaTotale(libro1, libro2, libro3);
                break;

            case 3:
                cout << prezzoMinimo(libro1, libro2, libro3);
                break;
        }
    }

    return 0;
}
