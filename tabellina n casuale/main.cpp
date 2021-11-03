#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int numero;
    int i;
    int posizione=1;
    int risultato=0;

    srand(time(0));
    numero=rand()%10+1;
<<<<<<< Updated upstream
    for (i=0; i<10; i++, posizione++){
        risultato = numero*posizione;
        cout << risultato << " " << endl;
=======
<<<<<<< HEAD
    cout << "Numero iniziale: " << numero << endl;
    cout << "\nTabellina: " << endl;
    for (i=0; i<10; i++){
        numero=numero*(numero/numero);
        cout << numero << endl;
=======
    for (i=0; i<10; i++, posizione++){
        risultato = numero*posizione;
        cout << risultato << " " << endl;
>>>>>>> 5711c6538447e6b2742fd75cffb3f731eccd4cfa
>>>>>>> Stashed changes
    }

    return 0;
}
