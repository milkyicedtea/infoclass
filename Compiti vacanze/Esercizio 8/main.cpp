// Dati due array paralleli di lunghezza n=25,
// Si immagazzinino i cognomi degli alunni di una classe su uno e sull’altro la classe
// a. Determinare quanti voti sono superiori a 6
// b. Determinare il massimo voto ed indicare il cognome e la classe degli allievi che lo hanno
// conseguito
// c. Dare in uscita tutti gli allievi della 3C

#include <iostream>
#include <cctype> //toupper
#include <limits>

using namespace std;

int main()
{
    const int n = 25;

    int max = -10;
    string alunni[n];
    string alunnimax[n];
    char classimax[n] {};
    char classe[n] {};
    int voti[n] {};
    int sufficienze = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Inserire il cognome dell'alunno" << endl;
        cin >> alunni[i];
        cout << "Inserire la sezione" << endl;
        cin >> classe[i];
        while (isdigit(classe[i]))
        {
            cin.clear();
            cout << "Il valore inserito non e' una lettera. Inserire nuovamente la sezione" << endl;
            cin >> classe[i];
        }
        
        cout << "Inserire il voto" << endl;
        cin >> voti[i];

        if (voti[i] > max)
        {
            max = voti[i];
            alunnimax[i] = alunni[i];
            classimax[i] = classe[i];
        }

        if (voti[i] >= 6)
        {
            sufficienze++;
        }
    }

    cout << "Il voto massimo e' stato " << max << " e gli alunni che lo hanno conseguito sono: ";
    for (int i = 0; i < n; i++)
    {
        if (voti[i] == max && max != -10)
        {
            cout << alunni[i] << ", ";
        }

    }

    cout << ". \nAlunni della 3C presenti nell'elenco:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (toupper(classe[i]) == 'C')
        {
            cout << alunni[i] << ", ";
        }
    }

    return 0;
}
