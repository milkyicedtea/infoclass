#include <iostream>

using namespace std;

float pacchettovacanza;
float assicurazione; //10% del costo se è meno di 500, 15% per più
float parcheggio; //10 euro a giornata
float volo;
float ngiorni;
float prezzoagiornata;
float prezzosoggiorno;




int main()
{
    cout << "Prezzo per giornata ";
    cin >> prezzoagiornata;
    cout << "\nNumero dei giorni ";
    cin >> ngiorni;
    cout << "\nInserire il prezzo del volo ";
    cin >> volo;
    parcheggio=ngiorni*10;
    prezzosoggiorno=prezzoagiornata*ngiorni;
    if (prezzosoggiorno < 500) {
        assicurazione=(prezzosoggiorno*10)/100;
    }
    else {
        assicurazione=(prezzosoggiorno*15)/100;
    }
    pacchettovacanza=prezzosoggiorno+assicurazione+parcheggio+volo;
    cout << "Il pacchetto vacanza costa: " << pacchettovacanza;

    return 0;
}
