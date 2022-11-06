#include <iostream>

using namespace std;

int main()
{
    int numeroabbonamenti;
    float prezzo=0;
    char tipo;
    char sesso;
    int incassopalestra=0;
    int annuali=0;
    int minimocosto=10000000;

    cout << "Inserire il numero di abbonamenti" << endl;
    cin >> numeroabbonamenti;

    for (int i=0; i<numeroabbonamenti; i++)
    {
        cout << "Inserire il prezzo dell'abbonamento" << endl;
        cin >> prezzo;
        cout << "Inserire la tipologia dell'abbonamento (m, sem, a)" << endl;
        cin >> tipo;
        cout << "Inserire il sesso del cliente" << endl;
        cin >> sesso;
        if (minimocosto > prezzo)
        {
            minimocosto=prezzo;
        }
        if (tipo == 'a')
        {
            annuali++;
        }
        incassopalestra=incassopalestra+prezzo;

    }

    cout << "L'incasso della palestra e' di: " << incassopalestra << endl;
    cout << "Gli abbonamenti annuali sono: " << annuali << endl;
    cout << "Il minimo costo tra tutti gli abbonamenti e': " << minimocosto << endl;


    return 0;
}
