#include <iostream>

using namespace std;

const int N = 4;

struct Vini
{
    string denominazione;
    string colore;
    string origine;
    int anno_imbottigliamento = 0;
    float gradazione = 0.0;
    float prezzo = 0.0;
};

Vini vino1;
Vini vino2;
Vini vino3;
Vini vino4;

Vini* pointer1 = &vino1;
Vini* pointer2 = &vino2;
Vini* pointer3 = &vino3;
Vini* pointer4 = &vino4;

Vini* arr[N] {pointer1, pointer2, pointer3, pointer4};

void carica(Vini* pp)
{
    cout << "Inserire la denominazione ";
    cin >> pp -> denominazione;
    cout << "Inserire il colore ";
    cin >> pp -> colore;
    cout << "Inserire l'origine ";
    cin >> pp -> origine;
    cout << "Inserire l'anno di imbottigliamente ";
    cin >> pp -> anno_imbottigliamento;
    cout << "Inserire la gradazione ";
    cin >> pp -> gradazione;
    cout << "Inserire il prezzo ";
    cin >> pp->prezzo;
}

void massimo(Vini* array[])
{
    int contatore = 0;
    float max = 0.0;

    for (int i = 0; i < N; i++)
    {
        if (max < array[i]->prezzo)
        {
            max = array[i]->prezzo;
            contatore = i;
        }
    }

    cout << "Il vino che costa di piu' e' il: " << array[contatore]->denominazione << endl;
}

float prezzo_medio()
{
    float media = 0;
    for (int i = 0; i < N; i++)
    {
        media += arr[i]->prezzo;
    }

    return media/N;
}

void gradazione_rossi()
{
    for (int i = 0; i < N; i++)
    {
        if (arr[i]->colore == "rosso" || arr[i]->colore == "Rosso" || arr[i]->colore == "ROSSO")
        {
            if (arr[i]->gradazione > 12)
            {
                cout << arr[i]->denominazione << endl;
            }
        }
    }
}

int main()
{
    int scelta = 10;
    do
    {
        cout << "Inserire 0 per uscire;\nInserire 1 per caricare i vini;\nInserire 2 per sapere il nome del vino piu' costoso;\nInserire 4 per sapere il prezzo medio tra tutti i vini;\nInserire 5 per i vini rossi con gradazione superiore a 12;" << endl;
        cin >> scelta;
        switch (scelta)
        {
            case 0:
                break;

            case 1:
                carica(pointer1);
                carica(pointer2);
                carica(pointer3);
                carica(pointer4);
                break;

            case 2:
                massimo(arr);
                break;

            case 3:
                prezzo_medio();
                break;

            case 4:
                cout << "La media dei prezzi dei vini e': " << prezzo_medio() << endl;

            case 5:
                gradazione_rossi();
                break;

            default:
                scelta = 0;
                break;
        }
    } while (scelta != 0);

    return 0;
}