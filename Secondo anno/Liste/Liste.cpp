#include <iostream>

using namespace std;

struct vagone
{
    int info = 0;
    vagone* prox = NULL;
    //vagone* motrice = NULL;
};

int counter_inseriti = 0;

vagone* motrice = NULL;

void CreaLista(int x)
{
    vagone* nuovo = NULL;
    nuovo = new(vagone);
    nuovo->info = x;
    nuovo->prox = NULL;
    motrice = nuovo;
}

void InsTesta(int x)
{
    vagone* nuovo = NULL;
    nuovo = new(vagone);
    nuovo->info = x;
    nuovo->prox = motrice;
    motrice = nuovo;
}

void InsCoda(int x)
{
    vagone* nuovo = NULL;
    vagone* app = NULL;
    nuovo = new(vagone);
    nuovo->info = x;
    nuovo->prox = NULL;
    if (motrice == NULL)
    {
        InsTesta(x);
    }
    else
    {
        app = motrice;
        while (app->prox != NULL)
        {
            app = app->prox;
        }
        app->prox = nuovo;
    }
}

void prtList()
{
    vagone* app = NULL;
    if (motrice == NULL)
    {
        cout << "Your list is empty" << endl;
    }
    else
    {
        app = motrice;
        while (app != NULL)
        {
            cout << "\n" << app->info;
            app = app->prox; 
        }
        cout << endl;
    }
}

void mediaElementi()
{
    float media = 0.0;

    vagone* app = NULL;
    if (motrice == NULL)
    {
        cout << "Your list is empty" << endl;
    }
    else
    {
        int counter = 0;
        app = motrice;
        while (app != NULL)
        {
            media += app->info;
            app = app->prox;
            counter++;
        }
        cout << "La media dei valori e': " << media/counter << endl;
    }
}

void DropTesta()
{
    motrice = motrice->prox;
}

void DropCoda()
{
    vagone* app = NULL;
    if (motrice->prox == NULL)
    {
        motrice = NULL;
    }
    else
    {
        app = motrice;
        while(app->prox->prox != NULL)
        {
            app = app->prox;
        }
        app->prox = NULL;
    }
}

int main()
{
    int info = 0;
    int scelta = 10;
    do
    {
        cout << "Inserire 0 per uscire;\nInserire 1 per inizializzare una lista con un valore;\nInserire 2 per inserire un valore in testa;\nInserire 3 per caricare un valore in code;\nInserire 4 per stampare tutti i valori;\nInserire 5 per eseguire la media tra i valori;\nInserire 6 per eliminare la testa della lista;\nInserire 7 per eliminare la coda della lista;" << endl;
        cin >> scelta;
        switch (scelta)
        {
            case 0:
                cout << "Uscendo dal programma.." << endl;
                break;

            case 1:
                cout << "Inserire un valore singolo" << endl;
                cin >> info;
                CreaLista(info);
                break;

            case 2:
                cout << "Inserire il valore da inserire in testa" << endl;
                cin >> info;
                InsTesta(info);
                break;

            case 3:
                cout << "Inserire il valore da inserire in coda" << endl;
                cin >> info;
                InsCoda(info);
                break;

            case 4:
                prtList();
                break;

            case 5:
                mediaElementi();
                break;

            case 6:
                DropTesta();
                break;

            case 7:
                DropCoda();
                break;

            default:
                scelta = 0;
                break;
        }
    } while (scelta != 0);

    return 0;
}