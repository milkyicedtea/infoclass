#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    const int n = 10;
    int vec[n] = { };
    int i;
    int a;
    int val;
    bool trovato = false;
    int x=0;
    int numeriuguali=0;

    srand(time(0));
    x=rand()%n+1;

    cout << "il valore x e': " << x << endl;

    for (i=0; i<n; i++)
    {
        val = rand()%n+1;
        vec[i] = val;
        cout << "Riempiendo la posizione " << i << " del vettore con " << vec[i] << endl;
    }
    do
    {
    for (a=0; a<i; a++)
    {
        if (vec[a] == x)
        {
            trovato = true;
            numeriuguali++;
            val = vec[a];
        }
    }
    } while (trovato == false && a < n);
    if (trovato == true)
    {
        cout << "Ci sono " << numeriuguali << " numeri uguali al valore x" << endl;
    }else cout << "Non c'e nessun numero uguale al valore x" << endl;
    cout << "Il numero uguale era " << val << endl;
    return 0;
}
