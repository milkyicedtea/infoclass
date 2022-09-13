// Cariare i tre array simultanamente.
// L'array Q può essere caricato randomicamente tra uno e 10.
// inoltre si calcoli la spesa per ciascuno si depositi in un array SP parallelo ai 3
// Assegnato dall'utente il nome di un aticolo,
// calcolare la spesa dell'articolo ed applicare uno sconto del 30% se la quantità è maggiore di 5

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    const int n = 1;
    float prc[n] {};
    int qty[n] {};
    string obj[n] {};
    float spt[n] {};
    int i=0;

    srand(time(0));
    for (i = 0; i<n; i++)
    {
        cout << "inserire il nome dell'articolo" << endl;
        cin >> obj[i];
        cout << "inserire il prezzo dell'oggetto" << endl;
        cin >> prc[i];
        //random qty
        qty[i] = rand()%10+1;

        if ( qty[i] >= 5 )
        {
        spt[i] = ((prc[i] * qty[i])*30)/100;
        }
        else
        {
            spt[i] = prc[i] * qty[i];
        }
    }
    for (i = 0; i<n; i++)
    {
        cout << "l'articolo e': " << obj[i] << ", la quantita' e':  " << qty[i] << ", e il prezzo totale e': " << spt[i] << "." << endl;
    }



    return 0;
}
