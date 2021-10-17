#include <iostream>

using namespace std;

int main()
{
    //sconto 10% treno //sconto 20% auto
    float sconto;
    float costobase;
    float prezzo;
    float distanza;
    char provincia;
    char mezzo;

    cout << "Inserire il costo base dell'abbonamento " << endl;
    cin >> costobase;
    cout << "Inserire 's' per se si abita in provincia e 'n' se non si abita in provincia " << endl;
    cin >> provincia;
    if (provincia == 's')
    {
        cout << "Inserire la distanza dalla scuola in km " << endl;
        cin >> distanza;
        if (distanza<=30)
            {
                cout << "Inserire 't' per treno o 'a' per autobus " << endl;
                cin >> mezzo;
                if (mezzo == 't')
                {
                    sconto=(costobase*10)/100;
                    prezzo=costobase-sconto;
                }
                if (mezzo == 'a')
                {
                    sconto=(costobase*20)/100;
                    prezzo=costobase-sconto;
                }
            }else prezzo=costobase;

    }else prezzo=costobase;

    cout << "Il prezzo dell'abbonamento e' di: " << prezzo << endl;

    return 0;
}
