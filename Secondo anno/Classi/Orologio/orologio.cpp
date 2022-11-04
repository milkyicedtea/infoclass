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
        cout << "Orario: " << ore << ", " << minuti << ", " << secondi << endl;
    }

};

Orologio orologio;

int main()
{
    int h;
    int m;
    int s;

    cout << "Inserire orario (ore, minuti, secondi)" << endl;
    cin >> h;
    cin >> m;
    cin >> s;
    orologio.setOrario(h, m, s);
    orologio.getOrario();
    return 0;
}