#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int a;
    int i=0;
    int somma1;
    int somma2;

    //prime 3 estrazioni
    cout << "estrazioni del primo giocatore" << endl;
    srand(time(0));
    for (a; i<3; i++){
        a=rand()%6+1;
            cout << a << endl;
            somma1=somma1+a;
    }

    cout << "estrazioni del secondo giocatore" << endl;
    srand(time(0));
    for (i=0; i<3; i++){
        a=rand()%6+1;
            cout << a << endl;
            somma2=somma2+a;
    }
    return 0;
}
