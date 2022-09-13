#include <iostream>

using namespace std;

int main()
{
    float temperatura;

    cout << "Inserire il valore della temperatura ";
    cin >> temperatura;
    if (temperatura<18)
    {
        if (temperatura<5)
        {
            cout << "\nRilevati danni irreparabili. Causa: temperatura minore di 5 gradi";
        }
        else cout << "\nRilevata situazione di pericolo. Causa: temperatura minore di 18 gradi";
    }
    else cout << "\nNessun problema rilevato durante la misurazione della temperatura";

    return 0;
}
