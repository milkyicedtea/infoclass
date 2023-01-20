#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

const int n = 6;

class Barca
{
    private:
        string tipo;
        float lunghezza;
        float valore;

    public:
        Barca()
        {
            tipo = "";
            lunghezza = 0;
            valore = 0;
        }

        void esciDaPorto()
        {
            tipo = "";
            lunghezza = 0;
            valore = 0;
        }

        void setBarca(string sTipo, float sLunghezza, float sValore)
        {
            tipo = sTipo;
            lunghezza = sLunghezza;
            valore = sValore;
        }
};

Barca porto[n];

int main()
{

    return 0;
}