// array di struct che immagazzinano documenti di identita
// calcolare la persona piu vecchia

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N = 10;

struct personaProperties
{
    int eta;
    string codiceFiscale;
    string luogoDiNascita;
    string nome;
};

personaProperties documenti[N];

void carica()
{
    for (int i = 0; i < N; i++)
    {
        cout << "Inserire l'eta della persona ";
        cin >> documenti[i].eta;
        cout << "\nInserire Il codice fiscale della persona ";
        cin >> documenti[i].codiceFiscale;
        cout << "\nInserire Il luogo di nascita della persona ";
        cin >> documenti[i].luogoDiNascita;
        cout << "\nInserire Il nome della persona ";
        cin >> documenti[i].nome;
    }
}

int calcoloEta()
{
    int etaMaggiore = documenti[0].eta;
    for (int i = 1; i < N; i++)
    {
        if (documenti[i].eta > etaMaggiore)
        {
            etaMaggiore = documenti[i].eta;
        }
    }

    return etaMaggiore;
}

int main()
{
    carica();
    cout << calcoloEta();

    return 0;
}
