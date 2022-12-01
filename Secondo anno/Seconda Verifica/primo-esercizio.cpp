#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::cin;

const int n = 5;

class Dipendente
{
    private:
        string cognome;
        string nome;
        string ruolo;
        float stipendio;
        string telefono;

    public:
        string nomeScuola;

        // costruttori
        Dipendente()
        {
            cognome = "";
            nome = "";
            ruolo = "";
            stipendio = 0.0f;
            telefono = "";
        }

        Dipendente(Dipendente &obj)
        {
            cognome = obj.cognome;
            nome = obj.nome;
            ruolo = obj.ruolo;
            stipendio = obj.stipendio;
            telefono = obj.telefono;
            nomeScuola = obj.nomeScuola;
        }

        string getCognome()
        {
            return cognome;
        }

        void setDipendente()
        {
            cout << "\nInserire cognome" << endl;
            cin >> cognome;

            cout << "Inserire nome" << endl;
            cin >> nome;

            cout << "Inserire ruolo" << endl;
            cin >> ruolo;

            cout << "Inserire stipendio" << endl;
            cin >> stipendio;

            cout << "Inserire telefono" << endl;
            cin >> telefono;

            cout << "Inserire nome scuola" << endl;
            cin >> nomeScuola;
        }

        void stampaSegretario()
        {
            if (ruolo == "segretario")
            {
                    cout << "Cognome del segretario " << ": " << cognome << endl;
                    cout << "Nome del segretario " << ": " << nome << endl;
                    cout << "Stipendio del segretario " << ": " << stipendio << endl;
                    cout << "Telefono del segretario " << ": " << telefono << endl;
                    cout << "Scuola del segretario " << ": " << nomeScuola << endl;
            }
        }

        void incrementoProfessori()
        {
            for (int i = 0; i < n; i++)
            {
                if (ruolo == "professore")
                {
                    stipendio*=1.15f;
                }
            }
        }

        void stampaCollaboratore()
        {
            if ((ruolo == "collaboratore") || (ruolo == "collaboratore scolastico") || (ruolo == "ata"))
            {
                cout << "Cognome del collaboratore " << cognome << endl;
                cout << "Telefono del collaboratore " << telefono << endl;
            }
        }

        void elimina()
        {
            cognome = "";
            nome = "";
            ruolo = "";
            stipendio = 0.0f;
            telefono = "";
        }

};

Dipendente archivioScuole[n] {};

void riordina(Dipendente arr[])
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i].getCognome() == "")
        {
            arr[i] = arr[i+1];
        }
    }
}

int main()
{
    int scelta;
    do
    {
        cout << "\nInserire 0 per uscire;\nInserire 1 per inserire un dipendente singolo;\nInserire 2 per stampare i segretari;\nInserire 3 per incrementare lo stipendo dei professori;\nInserire 4 per stampare i collaboratori scolastici;\nInserire 5 per elimare un elemento dall'archivio" << endl;
        cin >> scelta;
        int i = 0;
        switch(scelta)
        {
            case 0:
                cout << "Uscendo dal programma.." << endl;
                break;

            case 1:
                cout << "\nInserire la posizione del dipendente da inserire" << endl;
                cin >> i;
                archivioScuole[i].setDipendente();
                break;

            case 2:
                for (int i = 0; i < n; i++)
                {
                    archivioScuole[i].stampaSegretario();
                }
                break;

            case 3:
                for (int i = 0; i < n; i++)
                {
                    archivioScuole[i].incrementoProfessori();
                }
                break;

            case 4:
                for (int i = 0; i < n; i++)
                {
                    archivioScuole[i].stampaCollaboratore();
                }
                break;

            case 5:
                cout << "\nInserire la posizione del dipendente da eliminare" << endl;
                cin >> i;
                archivioScuole[i].elimina();
                riordina(archivioScuole);
                break;

            default:
                scelta = 0;
                break;
        }

    } while (scelta !=0);

    return 0;
}
