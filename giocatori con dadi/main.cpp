#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int a;
    int i;
    int b;
    int somma1=0;
    int somma2=0;

    //estrazioni
    srand(time(0));
    for (i=0; i<3; i++){
        a=rand()%6+1;
            cout << "giocatore 1" << endl << a << endl;
            somma1=somma1+a;
        b=rand()%6+1;
            cout << "giocatore 2" << endl << b << endl;
            somma2=somma2+b;
        }
    if (somma1 < somma2){
        cout << "vince il secondo giocatore con: " << somma2 << " punti" << endl;
    }
    else cout << "vince il primo giocatore con: " << somma1 << " punti" << endl;
    return 0;
}
