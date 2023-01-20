#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class ContoCorrente
{
    private:
        string contoCorrente;
        string clienteConto;
        string enteCredito;
        float saldo;
        int numeroOperazioni;

    public:
        ContoCorrente()
        {
            contoCorrente = "";
            clienteConto = "";
            enteCredito = "";
            saldo = 0.0f;
            numeroOperazioni = 20;
        }

        ContoCorrente(ContoCorrente &obj)
        {
            contoCorrente = obj.contoCorrente;
            clienteConto = obj.clienteConto;
            enteCredito = obj.enteCredito;
            saldo = obj.saldo;
            numeroOperazioni = 20;
        }

        void set_contoCorrente(string contoCorrente1)
        {
            contoCorrente = contoCorrente1;
        }

        string get_contoCorrente()
        {
            return contoCorrente;
        }

        void set_clientConto(string clienteConto1)
        {
            clienteConto = clienteConto1;
        }

        string get_clientConto()
        {
            return clienteConto;
        }

        float get_saldo()
        {
            return saldo;
        }

        void versamento(float saldoAggiunto)
        {
            
            if (numeroOperazioni > 0)
            {
                numeroOperazioni--;
                saldo += saldoAggiunto;
            }
            else
            {
                cout << "\nNumero operazioni non sufficiente, verra' scalato il valore di 1 euro dal conto per eseguire l'operazione" << endl;
                saldo--;
                numeroOperazioni--;
                saldo += saldoAggiunto;
            }

            cout << "\nIl saldo corrente e': " << saldo << endl;
        }

        void prelievo(float saldoPrelevato)
        {
            if (saldo > saldoPrelevato)
            {
                if (numeroOperazioni > 0)
                {
                    numeroOperazioni--;
                    saldo -= saldoPrelevato;
                }
                else
                {
                    cout << "\nNumero operazioni non sufficiente, verra' scalato il valore di 1 euro dal conto per eseguire l'operazione" << endl;
                    saldo--;
                    saldo -= saldoPrelevato;
                }
            }
            else
            {
                cout << "\nImpossibile prelevare " << saldoPrelevato << " euro, verra' prelevato il saldo rimanente (" << saldo << ")." << endl;
                saldo -= saldo;
            }
            
            cout << "\nIl saldo corrente e': " << saldo << endl;
        }
};

int main()
{

    return 0;
}