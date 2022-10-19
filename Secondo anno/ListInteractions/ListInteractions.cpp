#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct struttura
{
    int info = 0;
    struttura* prox = NULL;
};

struttura* testa = NULL;

void CreaLista(int x)
{
    struttura* nuovo = NULL;
    nuovo = new(struttura);
    nuovo->info = x;
    nuovo->prox = NULL;
    testa = nuovo;
}

void InsTesta(int x)
{
    struttura* nuovo = NULL;
    nuovo = new(struttura);
    nuovo->info = x;
    nuovo->prox = testa;
    testa = nuovo;
}

void InsCoda(int x)
{
    struttura* nuovo = NULL;
    struttura* app = NULL;
    nuovo = new(struttura);
    nuovo->info = x;
    nuovo->prox = NULL;
    if (testa == NULL)
    {
        InsTesta(x);
    }
    else
    {
        app = testa;
        while (app->prox != NULL)
        {
            app = app->prox;
        }
        app->prox = nuovo;
    }
}

void DropTesta()
{
    testa = testa->prox;
}

void DropCoda()
{
    struttura* app = NULL;
    if (testa->prox == NULL)
    {
        testa = NULL;
    }
    else
    {
        app = testa;
        while (app->prox->prox != NULL)
        {
            app = app->prox;
        }
        app->prox = NULL;
    }
}

void prtList()
{
    struttura* app = NULL;
    if (testa == NULL)
    {
        cout << "Your list is empty" << endl;
    }
    else
    {
        app = testa;
        while (app != NULL)
        {
            cout << "\n" << app->info;
            app = app->prox;
        }
        cout << endl;
    }
}

void main()
{
    int info = 0;
    int scelta = 10;
    do
    {
        cout << "Inserire 0 per uscire;\nInserire 1 per inizializzare una lista con un valore;\nInserire 2 per inserire un valore in testa;\nInserire 3 per caricare un valore in code;\nInserire 4 per eliminare la testa della lista;\nInserire 5 per eliminare la coda della lista;\nInserire 6 per stampare tutti i valori;" << endl;
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
            DropCoda();
            break;

        case 5:
            DropTesta();
            break;

        case 6:
            prtList();
            break;

        default:
            scelta = 0;
            break;
        }
    } while (scelta != 0);

    //return 0;
}
