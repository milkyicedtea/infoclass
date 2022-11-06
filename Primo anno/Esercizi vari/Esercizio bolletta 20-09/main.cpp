#include <iostream>

using namespace std;

//Numero scatti bolletta precedenti
int nsb;
//Numero scatti letti sul contatore
int nsc;
//Costo totale degli scatti
float cts;
//Costo singolo scatto
float cs;
//Valore iva
float vi;
//Ammontare totale della bolletta
float at;
//Canone fisso
float cf;

int main()
{
    cout << "Inserire il numero scatti della bolletta precedente ";
    cin >> nsb;
    cout << "\nInserire il numero scatti letti sul contatore ";
    cin >> nsc;
    cout << "\nInserire il costo del singolo scatto ";
    cin >> cs;
    cout << "\nInserire il costo del canone fisso ";
    cin >> cf;
    //Calcolo ammontare
    cts=(nsb+nsc)*cs;
    vi=(cts*22)/100;
    at=cts+vi+cf;
    cout << "L'ammontare totale da pagare e' " << at;
}
