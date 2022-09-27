#include <iostream>

using namespace std;

struct Vini
{
    string denominazione;
    string colore;
    string origine;
    int anno_imbottigliamento = 0;
    float gradazione = 0.0;
    float prezzo = 0.0;
};

Vini* pointer1 = NULL;

Vini vino1;

//Vini* arr[1]{pointer1};

int main()
{
    vino1.prezzo = 10.0;
    pointer1 = &vino1;
    Vini* arr[1] {pointer1};
    float max = arr[0]->prezzo;
    cout << max;
}
