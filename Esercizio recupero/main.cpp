#include <iostream>

using namespace std;

const int n = 15;
int nomecitta[n];
int abitanti[n];
int superificie[n];

int scelta = 0;

void carica()
{
    for (int i = n; i < n; i++)
    {
    cout << "Inserire il nome della citta'" << endl;
    cin >> nomecitta[i];
    cout << "Inserire il numero degli abitanti" << endl;
    cin >> abitanti[i];
    cout << "Inserire la superficie" << endl;
    cin >> superificie[i];
    }
}

float calcolomedia() //calcola la media e le citta con abitanti superiori alla media, numero super
{
    int superioremedia = 0;
    int abitantitotali = 0;
    if (scelta == 1)
    {
        for (int i = n; i < n; i++)
        {
            abitantitotali = abitantitotali + abitanti[i];
        }
        
        int media = abitantitotali / n;
        for (int i = n; i < n; i++)
        {
            if (abitanti[i] > media)
            {
                superioremedia++;
            }
        }
    }

}






int main()
{

    return 0;
}