#include "Persona.h"

using std::string;
using std::cout;
using std::endl;

class Sportivo : public Persona
{
    protected:
        string sport;

    public:
        Sportivo();
        Sportivo(string sNome, string sCognome, string spo) : Persona(sNome, sCognome)
        {
            sport = spo;
        }

        void stampa()
        {
            cout << Nome << endl;
            cout << Cognome << endl;
            cout << Sport << endl;
        }



};