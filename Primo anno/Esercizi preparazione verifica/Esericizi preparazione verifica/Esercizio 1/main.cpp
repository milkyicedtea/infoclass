// determinare la superficie di base, la superficie laterale, la superficie totale, il volume
// di un parallelepipedo che ha le misure di base b, h. L&#39;altezza della figura è H

#include <iostream>

using namespace std;

    int base = 0;
    int altezza = 0;
    int profondita = 0;

int volume(int base, int profondita, int altezza)
{
    int volume = (base * profondita * altezza) ;
    return volume;
}

int superficiebase(int base, int altezza)
{
    int superficiebase = 2 * (base * altezza);
    return superficiebase;
}

int superficielaterale(int altezza, int profondita)
{
    int superficielaterale = 2 * (altezza * profondita);
    return superficielaterale;
}

int superficietotale()
{
    int superficietotale = superficiebase(base, altezza) + superficielaterale(altezza, profondita);
    return superficietotale;
}

int main()
{

    cout << "Inserire la base della figura: ";
    cin >> base;
    cout << "\nInserire l'altezza della figura: ";
    cin >> altezza;
    cout << "\nInserire la profondita' della figura: ";
    cin >> profondita;
    cout << "\nIl volume e': " << volume(base, profondita, altezza) << endl;
    cout << "La superficie di base e': " << superficiebase(base, altezza) << endl;
    cout << "La superficie laterale e': " << superficielaterale(altezza, profondita) << endl;
    cout << "La superficie totale e': " << superficietotale() << endl;

}
