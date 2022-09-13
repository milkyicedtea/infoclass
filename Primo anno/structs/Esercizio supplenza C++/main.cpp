#include <iostream>
#include <string>

using namespace std;

//const per for e array
const int N = 15;
int i = 0;

struct prodotto
{
    string nome = "";
    float prezzo = 0; 
    int quantita = 0;
    string reparto = "";
    int codice = 0;
};

//crea array di 'prodotto'
prodotto prodotti[N] = {};

void carica_prodotto()
{
    for (int i = 0; i < N; i++)
    {
        cout << "Inserire il nome del prodotto ";
        cin >> prodotti[i].nome;
        cout << "\nInserire il prezzo del prodotto";
        cin >> prodotti[i].prezzo;
        cout << "\nInserire la quantita' del prodotto";
        cin >> prodotti[i].quantita;
        cout << "\nInserire il reparto del prodotto";
        cin >> prodotti[i].reparto;
        cout << "\nInserire il codice del prodotto";
        cin >> prodotti[i].codice;
    }
}

void print_prodotto()
{
    for (int i = 0; i < N; i++)
    {
        cout << "Prodotto numero " << i << endl;
        cout << "Nome del prodotto: " << prodotti[i].nome << endl;
        cout << "Prezzo del prodotto: " << prodotti[i].prezzo << endl;
        cout << "Quantita' del prodotto: " << prodotti[i].quantita << endl;
        cout << "Reparto del prodotto: " << prodotti[i].reparto << endl;
        cout << "Codice del prodotto: " << prodotti[i].codice << endl;
    }
}

float calcolo_minimo()
{
    int prezzo_minimo = prodotti[0].prezzo;
    for (int i = 1; i < N; i++)
    {
        if (prezzo_minimo > prodotti[i].prezzo)
        {
            prezzo_minimo = prodotti[i].prezzo;
        }
    }

    return prezzo_minimo;
}

int totale_giacenza()
{
    int totale_quantita = prodotti[0].quantita;
    for (int i = 1; i < N; i++)
    {
        totale_quantita+=prodotti[i];
    }

    return totale_quantita;
}

int prodotti_banco()
{
    int contatore_prodotti = 0;
}

void prezzo_superiore_a()
{

}

float media_casalinghi()
{

}

void quantita_magg_20()
{
    
}































int main()
{
    carica_prodotto();





    return 0;
}