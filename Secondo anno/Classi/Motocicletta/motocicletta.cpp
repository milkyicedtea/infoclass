#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Motocicletta
{
    private:
        string marca;
        string colore;
        int cilindrata;
        bool statoMotore;
        float serbatoio;
        float capacitaMax;
        bool checkOlio;
        bool checkFreni;

    public:
        Motocicletta(string mMarca, string mColore, int mCilindrata)
        {
            marca = mMarca;
            colore = mColore;
            cilindrata = mCilindrata;
        }

        Motocicletta(string mMarca, string mColore, int mCilindrata, bool mStatoMotore, float mSerbatoio, bool StatoMotore)
        {
            marca = mMarca;
            colore = mColore;
            cilindrata = mCilindrata;
            statoMotore = mStatoMotore;
            serbatoio = mSerbatoio;
        }

        void AvviaMotore()
        {
            if (statoMotore == false)
            {
                statoMotore = true;
                cout << "Motore in avvio.." << endl;
            }
            else
            {
                cout << "Il motore e' gia avviato" << endl;
            }
        }

        void SetSerbatoio(float mSerbatoio)
        {
            serbatoio = mSerbatoio;
        }

        void SetCapacita(float mCapacitaMax)
        {
            capacitaMax = mCapacitaMax;
        }
        
        bool GetStatoMotore()
        {
            return statoMotore;
        } 
};

int main()
{
    return 0;
}