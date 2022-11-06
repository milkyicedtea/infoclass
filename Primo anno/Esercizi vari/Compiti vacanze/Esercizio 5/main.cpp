// Scrivere un programma che fa inserire n numero di voti ad un alunno (n dato in ingresso):
// – ne calcola la media
// – dice quante insufficienze ha quell’ alunno.
// Dopo che sono stati inseriti i voti, il programma dice quanti voti insufficienti in tutto ci sono stati.

#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    float voto = 0;
    int i = 0;
    float media = 0;
    int insufficienze = 0;

    cout << "Inserire il numero di voti" << endl;

    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Inserire un voto" << endl;

        cin >> voto;
        media = media + voto;

        if (voto < 6)
        {
            insufficienze++;
        }
    }

    media = media/n;
    
    cout << "La media dei voti risulta " << media << " ed i voti insufficienti sono " << insufficienze << endl;

    return 0;
}