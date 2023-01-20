#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Persona
{
    protected:
        string nome;
        string cognome;
    
    public:
        Persona(string sNome, string sCognome)
        {
            nome = sNome;
            cognome = sCognome;
        }
        Persona();
        void stampa()
        {
            cout << nome << endl;
            cout << cognome << endl;
        }

        void setNome(string sNome)
        {
            nome = sNome;
        }

        void setCognome(string sCognome)
        {
            cognome = sCognome;
        }

        string getNome()
        {
            return nome;
        }

        string getCognome()
        {
            return cognome;
        }
};