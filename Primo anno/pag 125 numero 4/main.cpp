#include <iostream>

using namespace std;

int main()
{
    float sconto;
    float totalesconto;
    float totale;

    cout << "\nInserire il totale ";
    cin >> totale;
    if (totale>100)
    {
        sconto=(totale*20)/100;
        totalesconto=totale-sconto;
        cout << "\nIl totale scontato e' di: " << totalesconto;
    }
    else cout << "\nIl totale e' di: " << totale;

    return 0;
}

