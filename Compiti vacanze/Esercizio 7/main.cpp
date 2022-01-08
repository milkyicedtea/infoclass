// Scrivere un programma che chiede quanti alunni ci sono in una classe poi per ogni alunno fa inserire
// 5 voti e ne scrive la media. (difficile ragionate)

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i = 0;

    int nalunni = 0;
    const int height = 50; // height, h
    const int nvoti = 5; // lenght, l

    float tempvoti = 0;

    int voti[height] [nvoti] {};

    cout << "Inserire il numero di alunni" << endl;
    cin >> nalunni;

    float medie[height] {};

    for (int h = 0; h < nalunni; h++)
    {

        for (int l = 0; l < nvoti; l++)
        {
            if (l == 0)
            {
                cout << "Inserire il primo voto dell'alunno numero " << h+1 << endl;
            }
            else
            {
                cout << "Inserire il voto seguente" << endl;
            }
            cin >> tempvoti;
            if (l != 0)
            {
                medie[h] = medie[h];
            }
            else
            {
                medie[h] = tempvoti;
            i++;
            }
        }
    }

    for (i = 0; i < nalunni; i++)
    {
        cout << "La media dell'alunno numero " << i+1 << " equivale a " << medie[i] << endl;
    }

}
