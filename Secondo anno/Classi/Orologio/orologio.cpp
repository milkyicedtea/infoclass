#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Orologio
{
    private:
        int ore = 0;
        int minuti = 0;
        int secondi = 0;

    public:
    //constructors
    Orologio()
    {
        ore = 0;
        minuti = 0;
        secondi = 0;
    }

    Orologio(int o, int m,int s)
    {
        ore = o;
        minuti = m;
        secondi = s;
    }

    void setOrario(int o, int m,int s)
    {
        ore = o;
        minuti = m;
        secondi = s;
    }

    void getOrario()
    {
        if (ore < 10 && minuti < 10)
        {
            cout << "Sono le 0" << ore << ":0" << minuti << " e " << secondi << " secondi" << endl;
        }
        else if (ore < 10)
        {
            cout << "Sono le 0" << ore << ":" << minuti << " e " << secondi << " secondi" << endl;
        }
        else if(minuti < 10)
        {
            cout << "Sono le " << ore << ":0" << minuti << " e " << secondi << " secondi" << endl;
        }
        else
        {
            cout << "Sono le " << ore << ":" << minuti << " e " << secondi << " secondi" << endl;
        }
    }

};

Orologio orologio;

int main()
{
    int h;
    int m;
    int s;

    cout << "Inserire orario (ore, minuti, secondi)" << endl;
    do
    {
        cin >> h;
        cin >> m;
        cin >> s;
        if (h > 24 or h < 0 and m > 60 or m < 0 and s > 60 or s < 0)
        {
            cout << "Orario non valido" << endl;
        }
    }while (h > 24 or h < 0 and m > 60 or m < 0 and s > 60 or s < 0);
    orologio.setOrario(h, m, s);
    orologio.getOrario();
    return 0;
}