#include <iostream>

using namespace std;

int main()
{
    char veicolo;
    int cilindrata;
    int prezzo;

    cout << "Insierire 'c' per camion o 'a' per auto " << endl;
    cin >> veicolo;
    cout << "Inserire la cilindrata" << endl;
    cin >> cilindrata;
    if (veicolo == 'a')
    {
            if (cilindrata<=1000)
                prezzo=20;
            else
                if (cilindrata<=2000)
                    prezzo=30;
                else
                    prezzo=100;
    }

    if (veicolo =='c')
    {

            if (cilindrata<=2000)
                prezzo=40;
            else
                if (cilindrata<=3000)
                    prezzo=50;
                else
                    prezzo=100;
    }

    cout << "Il costo del biglietto e' di: " << prezzo << endl;
    return 0;
}
