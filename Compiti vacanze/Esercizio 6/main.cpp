// Scrivere un programma che lancia 10 dadi a 6 facce e se la somma dei risultati è maggiore di 35 dice
// che il risultato è sopra la media. (con i numeri pseudocasuali)

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int a;
    int b;
    int i;

    //10 estrazioni random
    srand(time(0));
    for (i=0; i<10; i++)
    {
        //numeri da 0 a 6
        a=rand()%6+1;
            cout << a << endl;
        
        b = b+a;
    }
    if (b > 35)
    {
        cout << "Il risultato (" << b << ") e' sopra la media" << endl;
    }



    return 0;
}