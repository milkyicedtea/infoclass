//struttura
//inserimento testa
//inserimento coda
//calcolo importo

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

struct Abbonamento
{
    string codice_fiscale = "";
    int durata = 0;
    string tipo = "";
    float prezzo = 0;
    Abbonamento* prox = NULL;
};

Abbonamento* testa = NULL;

void CreaLista(string codice_f, int durata_abb, string tipo_abb, float prezzo_abb)
{
    Abbonamento* nuovo = NULL;
    nuovo = new(Abbonamento);
    nuovo->codice_fiscale = codice_f;
    nuovo->durata = durata_abb;
    nuovo->tipo = tipo_abb;
    nuovo->prezzo = prezzo_abb;
    nuovo->prox = NULL;
    testa = nuovo;
}

void InsTesta(string codice_f, int durata_abb, string tipo_abb, float prezzo_abb)
{
    Abbonamento* nuovo = NULL;
    nuovo = new(Abbonamento);
    nuovo->codice_fiscale = codice_f;
    nuovo->durata = durata_abb;
    nuovo->tipo = tipo_abb;
    nuovo->prezzo = prezzo_abb;
    nuovo->prox = testa;
    testa = nuovo;
}

void InsCoda(string codice_f, int durata_abb, string tipo_abb, float prezzo_abb)
{
    Abbonamento* nuovo = NULL;
    Abbonamento* app = NULL;
    nuovo = new(Abbonamento);
    nuovo->codice_fiscale = codice_f;
    nuovo->durata = durata_abb;
    nuovo->tipo = tipo_abb;
    nuovo->prezzo = prezzo_abb;
    nuovo->prox = NULL;
    if (testa == NULL)
    {
        InsTesta(codice_f, durata_abb, tipo_abb, prezzo_abb);
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
    Abbonamento* app = NULL;
    if (testa->prox == NULL)
    {
        testa = NULL;
    }
    else
    {
        app = testa;
        while(app->prox->prox != NULL)
        {
            app = app->prox;
        }
        app->prox = NULL;
    }
} 

void CalcolaImportiTotali()
{
    float importo_totale = 0.0;

    Abbonamento* app = NULL;
    if (testa == NULL)
    {
        cout << "Your list is empty" << endl;
    }
    else
    {
        app = testa;
        while (app != NULL)
        {
            importo_totale += app->prezzo;
            app = app->prox;
        }
        cout << "Il totale degli importi e': " << importo_totale << endl;
    }
}

void Abbonamenti_Trimestrali()
{
    int counter_trimestrali = 0;

    Abbonamento* app = NULL;
    if (testa == NULL)
    {
        cout << "Your list is empty" << endl;
    }
    else
    {
        app = testa;
        while (app != NULL)
        {
            if (app->durata == 3);
            {
                counter_trimestrali++;
            }
            app = app->prox;
        }
        cout << "Il totale degli importi e': " << counter_trimestrali << endl;
    }
}

int main()
{
    string codice_fiscale = "";
    int durata = 0;
    string tipo = "";
    float prezzo = 0;
    int scelta = 10;
    do
    {
        cout << "Inserire 0 per uscire;\nInserire 1 per inizializzare una lista;\nInserire 2 per inserire un abbonamento in cima alla lista;\nInserire 3 per inserire un abbonamento in fondo alla lista;\nInserire 4 per stampare il valore dell'importo totale;\nInserire 5 per eliminare la testa della lista;\nInserire 6 per eliminare la coda della lista;" << endl;
        cin >> scelta;
        switch (scelta)
        {
        case 0:
            cout << "Uscendo dal programma.." << endl;
            break;

        case 1:
            cout << "Inserire il primo abbonamento della nuova lista" << endl;
            cout << "\nInserire il proprio codice fiscale:" << endl;
            cin >> codice_fiscale;
            cout << "\nInserire la durata dell'abbonamento:" << endl;
            cin >> durata;
            cout << "\nInserire il tipo di abbonamento:" << endl;
            cin >> tipo;
            cout << "\nInserire il prezzo dell'abbonamento:" << endl;
            cin >> prezzo;
            CreaLista(codice_fiscale, durata, tipo, prezzo);
            break;

        case 2:
            cout << "Inserire l'abbonamento da inserire in cima alla lista" << endl;
            cout << "\nInserire il proprio codice fiscale:" << endl;
            cin >> codice_fiscale;
            cout << "\nInserire la durata dell'abbonamento:" << endl;
            cin >> durata;
            cout << "\nInserire il tipo di abbonamento:" << endl;
            cin >> tipo;
            cout << "\nInserire il prezzo dell'abbonamento:" << endl;
            cin >> prezzo;
            InsTesta(codice_fiscale, durata, tipo, prezzo);
            break;

        case 3:
            cout << "Inserire l'abbonamento da inserire in fondo alla lista" << endl;
            cout << "\nInserire il proprio codice fiscale:" << endl;
            cin >> codice_fiscale;
            cout << "\nInserire la durata dell'abbonamento:" << endl;
            cin >> durata;
            cout << "\nInserire il tipo di abbonamento:" << endl;
            cin >> tipo;
            cout << "\nInserire il prezzo dell'abbonamento:" << endl;
            cin >> prezzo;
            InsCoda(codice_fiscale, durata, tipo, prezzo);
            break;

        case 4:
            CalcolaImportiTotali();
            break;

        case 5:
            DropCoda();
            break;

        case 6:
            DropTesta();
            break;

        default:
            scelta = 0;
            break;
        }
    } while (scelta != 0);

    return 0;
}