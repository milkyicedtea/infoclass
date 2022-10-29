#include <iostream>
#include <ctime>
#include <cstdlib>
#include <ctype.h>

using std::string;
using std::cout;
using std::cin;
using std::endl;

struct Libro
{
    string titolo;
    string genere;
    string autore;
    int numeroPagine;
    float prezzo;
    Libro* prox;
};

Libro* Libreria = NULL;
Libro* SuperioreVentiList = NULL;
Libro* PagSuperioreList = NULL;

void CreateList(string t, string g, string a, int np, float p)
{
    Libro* nuovo = NULL;
    nuovo = new(Libro);
    nuovo->titolo = t;
    nuovo->genere = g;
    nuovo->autore = a;
    nuovo->numeroPagine = np;
    nuovo->prezzo = p;
    nuovo->prox = NULL;
    Libreria = nuovo;
}

void InsTesta(string t, string g, string a, int np, float p)
{
    Libro* nuovo = NULL;
    nuovo = new(Libro);
    nuovo->titolo = t;
    nuovo->genere = g;
    nuovo->autore = a;
    nuovo->numeroPagine = np;
    nuovo->prezzo = p;
    nuovo->prox = Libreria;
    Libreria = nuovo;
}

void InsCoda(string t, string g, string a, int np, float p)
{
    Libro* nuovo = NULL;
    Libro* app = NULL;
    nuovo = new(Libro);
    nuovo->titolo = t;
    nuovo->genere = g;
    nuovo->autore = a;
    nuovo->numeroPagine = np;
    nuovo->prezzo = p;
    nuovo->prox = Libreria;
    if (Libreria == NULL)
    {
        InsTesta(t, g, a, np, p);
    }
    else
    {
        app = Libreria;
        while (app->prox != NULL)
        {
            app = app->prox;
        }
        app->prox = nuovo;
    }
}

void DropTesta()
{
    Libreria = Libreria->prox;
}

void DropCoda()
{
    Libro* app = NULL;
    if (Libreria->prox == NULL)
    {
        Libreria = NULL;
    }
    else
    {
        app = Libreria;
        while (app->prox->prox != NULL)
        {
            app = app->prox;
        }
        // comunicazione elemento
        cout << app->prox->titolo << endl;
        cout << app->prox->genere << endl;
        cout << app->prox->autore << endl;
        cout << app->prox->numeroPagine << endl;
        cout << app->prox->prezzo << endl;
        app->prox = NULL;
    }
}

void prtAutore(string writer)
{
    Libro* app = NULL;
    if (Libreria == NULL)
    {
        cout << "Your list is empty" << endl;
    }
    else
    {
        app = Libreria;
        while (app != NULL)
        {
            if (app->autore == writer)
            {
                cout << "\n" << app->titolo;
            }
            app = app->prox;
        }
        cout << endl;
    }
}

float przMinimo()
{
    Libro* app = NULL;
    float min = 100000.0f;
    if (Libreria == NULL)
    {
        cout << "Your list is empty" << endl;
    }
    else
    {
        app = Libreria;
        while (app != NULL)
        {
            if (app->prezzo < min)
            {
                min = app->prezzo;
            }
            app = app->prox;
        }
        return min;
    }

    return 0;
}

void SuperioreVenti()
{
    Libro* app = NULL;
    if (Libreria == NULL)
    {
        cout << "Your list is empty" << endl;
    }
    else
    {
        app = Libreria;
        while (app != NULL)
        {        
            if (app->prezzo > 20.0f)
            {
                if (SuperioreVentiList = NULL)
                {
                    Libro* nuovo = NULL;
                    nuovo = new(Libro);
                    nuovo->titolo = app->titolo;
                    nuovo->genere = app->genere;
                    nuovo->autore = app->autore;
                    nuovo->numeroPagine = app ->numeroPagine;
                    nuovo->prezzo = app->prezzo;
                    nuovo->prox = NULL;
                    SuperioreVentiList = nuovo;
                }
                else
                {
                    Libro* nuovo = NULL;
                    nuovo = new(Libro);
                    nuovo->titolo = app->titolo;
                    nuovo->genere = app->genere;
                    nuovo->autore = app->autore;
                    nuovo->numeroPagine = app->numeroPagine;
                    nuovo->prezzo = app->prezzo;
                    nuovo->prox = SuperioreVentiList;
                    SuperioreVentiList = nuovo;
                }
            }
            app = app->prox;
        }
    }
}

void PagSuperioreMedia()
{
    Libro* app = NULL;
    int c = 0;
    if (Libreria == NULL)
    {
        cout << "Your list is empty" << endl;
    }
    else
    {
        app = Libreria;
        float mediaPagine = 0.0f;
        while (app != NULL)
        {
            mediaPagine+=app->numeroPagine;
            app = app->prox;
            c++;
        }
        mediaPagine/=c;

        app = Libreria;
        while (app != NULL)
        {
            if (app->numeroPagine > mediaPagine)
            {
                if (PagSuperioreList = NULL)
                {
                    Libro* nuovo = NULL;
                    nuovo = new(Libro);
                    nuovo->titolo = app->titolo;
                    nuovo->genere = app->genere;
                    nuovo->autore = app->autore;
                    nuovo->numeroPagine = app ->numeroPagine;
                    nuovo->prezzo = app->prezzo;
                    nuovo->prox = NULL;
                    PagSuperioreList = nuovo;
                }
                else
                {
                    Libro* nuovo = NULL;
                    nuovo = new(Libro);
                    nuovo->titolo = app->titolo;
                    nuovo->genere = app->genere;
                    nuovo->autore = app->autore;
                    nuovo->numeroPagine = app->numeroPagine;
                    nuovo->prezzo = app->prezzo;
                    nuovo->prox = PagSuperioreList;
                    PagSuperioreList = nuovo;
                }
            }
            app = app->prox;
        }
    }
}

void prtVenti()
{
    Libro* app = NULL;
    if (SuperioreVentiList == NULL)
    {
        cout << "Your list is empty" << endl;
    }
    else
    {
        app = SuperioreVentiList;
        while (app != NULL)
        {
            cout << app->titolo << endl;
            cout << app->genere << endl;
            cout << app->autore << endl;
            cout << app->numeroPagine << endl;
            cout << app->prezzo << endl;
            app = app->prox;
        }
        cout << endl;
    }
}

void prtPag()
{
    Libro* app = NULL;
    if (PagSuperioreList == NULL)
    {
        cout << "Your list is empty" << endl;
    }
    else
    {
        app = PagSuperioreList;
        while (app != NULL)
        {
            cout << app->prox->titolo << endl;
            cout << app->prox->genere << endl;
            cout << app->prox->autore << endl;
            cout << app->prox->numeroPagine << endl;
            cout << app->prox->prezzo << endl;
            app = app->prox;
        }
        cout << endl;
    }
}

int main()
{
    string titolo = "";
    string genere = "";
    string autore = "";
    int numeroPagine = 0;
    float prezzo = 0.0f;
    int scelta = 10;
    do
    {
        cout << "Inserire 0 per uscire\nInserire 1 per inizializzare una lista;\nInserire 2 per inserire un libro in testa;\nInserire 3 per eliminare il libro in coda;\nInserire 4 per stampare tutti i libri di un autore;\nInserire 5 per sapere il prezzo minimo;\nInserire 6 per creare la lista con i libri con prezzo superiore a 20;\nInserire 7 per creare la lista con i libri con pagine superiori alla media" << endl;
        cin >> scelta;
        switch (scelta)
        {
        case 0:
            cout << "Uscendo dal programma.." << endl;
            break;

        case 1:
            cout << "Inserire titolo, genere, autore, numero di pagine, prezzo per creare la lista" << endl;
            cin >> titolo;
            cin >> genere;
            cin >> autore;
            cin >> numeroPagine;
            cin >> prezzo;
            CreateList(titolo, genere, autore, numeroPagine, prezzo);
            break;

        case 2:
            cout << "Inserire titolo, genere, autore, numero di pagine, prezzo da inserire in coda" << endl;
            cin >> titolo;
            cin >> genere;
            cin >> autore;
            cin >> numeroPagine;
            cin >> prezzo;
            InsCoda(titolo, genere, autore, numeroPagine, prezzo);
            break;

        case 3:
            DropCoda();
            break;

        case 4:
            cout << "Scegliere un autore" << endl;
            cin >> autore;
            prtAutore(autore);
            break;

        case 5:
            cout << "Il prezzo minimo e': " << przMinimo();
            break;

        case 6:
            SuperioreVenti();
            prtVenti();
            break;

        case 7:
            PagSuperioreMedia();
            prtPag();
            break;

        default:
            scelta = 0;
            break;
        }
    } while (scelta != 0);

    return 0;
}