// Memorizzare il seme e il punteggio di due carte da poker. Dire quale delle carte vale di più. Il valore
// di una carta da poker è dato in primo luogo dal punteggio e in caso di parità di punteggio dal seme.
// I punteggi in ordine decrescente sono {k,q,j,9,8,7,6,5,4,3,2,1}, i semi in ordine decrescente
// sono {cuori, quadri, fiori, picche} per i semi memorizzare solo la lettera iniziale del seme.
// PS: l’ordine dei semi può essere ricordato grazie alla frase “come quando fuori piove” in cui le parole
// ricordano i nomi dei semi.

#include <iostream>

using namespace std;

int main()
{
    const int n = 2;
    int valorecarta[n] {};
    char seme[n];

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << "Inserire il valore della prima carta (9, 8, 7, 6, 5, 4, 3, 2, 1)" << endl;
            cin >> valorecarta[i];
            cout << "Inserire l'iniziale del seme della prima carta (c, q, f, p)" << endl;
            cin >> seme[i];
            if (seme[i] == 'c')
            {
                seme[i] = 3;
            }
            else if (seme[i] == 'q')
                {
                    seme[i] = 2;
                }
                else if (seme[i] == 'f')
                    {
                        seme[i] = 1;
                    }
                    else if (seme[i] == 'p')
                        {
                            seme[i] = 0;
                        }
        }
        else if (i == 1)
            {
            cout << "Inserire il valore della seconda carta (9, 8, 7, 6, 5, 4, 3, 2, 1)" << endl;
            cin >> valorecarta[i];
            cout << "Inserire l'iniziale del seme della seconda carta (c, q, f, p)" << endl;
            cin >> seme[i];
            if (seme[i] == 'c')
            {
                seme[i] = 3;
            }
            else if (seme[i] == 'q')
                {
                    seme[i] = 2;
                }
                else if (seme[i] == 'f')
                    {
                        seme[i] = 1;
                    }
                    else if (seme[i] == 'p')
                        {
                            seme[i] = 0;
                        }
            }
    }

    if (valorecarta[0] == valorecarta[1])
    {
        if (seme[0] > seme[1])
        {
            cout << "La prima carta vale di piu'" << endl;
        }
        else if (seme[0] < seme[1])
        {
            cout << "La seconda carta vale di piu'" << endl;
        }
        else if (seme[0] == seme[1])
        {
            cout << "Le due carte hanno lo stesso valore!";
        }
    }
    else if (valorecarta[0] > valorecarta[1])
        {
            cout << "La prima carta vale di piu'" << endl;
        }
    else if (valorecarta[0] < valorecarta[1])
        {
            cout << "La seconda carta vale di piu'" << endl;
        }



    return 0;
}
