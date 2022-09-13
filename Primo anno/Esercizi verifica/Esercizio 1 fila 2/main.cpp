#include <iostream>

using namespace std;

int main()
{
    float prezzo;
    float spesatotale=0;
    float sconto; //15%
    int i;

    for (i=0; i<20; i++)
    {
        cout << "Inserire il prezzo del libro" << endl;
        cin >> prezzo;
        spesatotale=spesatotale+prezzo;
    }
    if (spesatotale > 200)
    {
        sconto=(spesatotale*15)/100;
        spesatotale=spesatotale-sconto;
    }
    cout << "La spesa totale e' di: " << spesatotale << endl;



    return 0;
}
