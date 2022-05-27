#include <iostream>

using namespace std;

const int numeroPiante = 10;

struct habitatProperties
{
    string luogo = " ";
    float temperatura = 0;
};

struct plantProperties
{
    string nome = " ";
    float prezzo = 0;
    int quantita = 0;
    string fioritura = " ";
    habitatProperties habitat;
};

plantProperties piante[numeroPiante] {};

void carica()
{
    for (int i = 0; i < numeroPiante; i++)
    {
        cout << "Inserire il nome della pianta ";
        cin >> piante[i].nome;
        cout << "Inserire il prezzo della pianta ";
        cin >> piante[i].prezzo;
        cout << "Inserire la quantita' disponibile ";
        cin >> piante[i].quantita;
        cout << "Inserire il periodo di fioritura ";
        cin >> piante[i].fioritura;
        cout << "Inserire l'habitat della pianta ";
        cin >> piante[i].habitat.luogo;
        cout << "Inserire la temperatura ideale per la pianta ";
        cin >> piante[i].habitat.temperatura;
    }
}

void stampa()
{
    for (int i = 0; i < numeroPiante; i++)
    {
        cout << "Il nome della pianta e': " << piante[i].nome << endl;
        cout << "Il prezzo della pianta e': " << piante[i].prezzo << endl;
        cout << "La quantita' disponibile e': " << piante[i].quantita << endl;
        cout << "Il periodo di fioritura della pianta e': " << piante[i].fioritura << endl;
        cout << "L'habitat della pianta e': " << piante[i].habitat.luogo << endl;
        cout << "La temperatura ideale per la pianta e': " << piante[i].habitat.temperatura << endl;
        cout << endl;
    }
}

float minimoPrezzo()
{
    float prezzoMinimo = piante[0].prezzo;
    for (int i = 1; i < numeroPiante; i++)
    {
        if (piante[i].prezzo < prezzoMinimo)
        {
            prezzoMinimo = piante[i].prezzo;
        }
    }

    return prezzoMinimo;
}

float capitaleGiacenza()
{
    float totaleGiacenza = piante[0].prezzo * piante[0].quantita;
    for (int i = 1; i < numeroPiante; i++)
    {
        totaleGiacenza += piante[i].prezzo * piante[i].quantita;
    }

    return totaleGiacenza;
}

int esemplariEsterno()
{
    int contatoreEsterni = 0;
    for (int i = 0; i < numeroPiante; i++)
    {
        if (piante[i].habitat.luogo == "esterno" || piante[i].habitat.luogo == "Esterno" || piante[i].habitat.luogo == "ESTERNO")
        {
            contatoreEsterni++;
        }
    }

    return contatoreEsterni;
}

void fiorituraPrimaverile()
{
    for (int i = 0; i < numeroPiante; i++)
    {
        if (piante[i].fioritura == "primavera" || piante[i].fioritura == "Primavera" || piante[i].fioritura == "PRIMAVERA")
        {
            cout << piante[i].nome << endl;
        }
    }
}

float temperaturaMediaInterni()
{
    float temperaturaMedia = 0;
    int contatoreDivisione = 0;
    for (int i = 0; i < numeroPiante; i++)
    {
        if (piante[i].habitat.luogo == "interno" || piante[i].habitat.luogo == "Interno" || piante[i].habitat.luogo == "INTERNO")
        {
            temperaturaMedia += piante[i].habitat.temperatura;
            contatoreDivisione++;
        }
    }
    temperaturaMedia /= contatoreDivisione;

    return temperaturaMedia;
}


int main()
{
    // tdlr cout per il menu di scelta
    cout << "Inserire 0 o un numero non presente per uscire\nInserire 1 per caricare l'array\nInserire 2 per stampare le informazioni delle piante\nInserire 3 per sapere il prezzo minimo tra i prezzi delle piante\nInserire 4 per sapere il totale del capitale di giacenza delle painte\nInserire 5 per sapere quanti sono gli esemplari da esterno\nInserire 6 per sapere i nomi delle piante che fioriscono in primavera\nInserire 7 per sapere la media delle temperature ideali tra le piante da interno" << endl;
    int scelta = 0;

    do
    {
        cin >> scelta;
        switch (scelta)
        {
            case 0:
                cout << "Uscendo dal programma.." << endl;
                break;

            case 1:
                carica();
                break;

            case 2:
                stampa();
                break;

            case 3:
                cout << "Il prezzo minimo tra le piante e' " << minimoPrezzo() << endl;
                break;

            case 4:
                cout << "Il capitale totale di giacenza delle piante e': " << capitaleGiacenza() << endl;
                break;

            case 5:
                cout << "Il totale degli esemplari da esterno e': " << esemplariEsterno() << endl;
                break;

            case 6:
                cout << "Nome delle piante con fioritura primaverile" << endl;
                fiorituraPrimaverile();
                break;

            case 7:
                cout << "La temperatura media delle piante da interni e': " << temperaturaMediaInterni() << endl;
                break;

            default:
                scelta = 0;
                break;
        }
    }while (scelta != 0);

    return 0;
}