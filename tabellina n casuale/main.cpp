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
    for (i=0; i<10; i++, posizione++){
        risultato = numero*posizione;
        cout << risultato << " " << endl;
    }

    return 0;
}
