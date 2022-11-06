/*Dato un numero naturale fattorizzarlo in fattori primi.
es 15 si fattorizza come 3*5.......46= 23*2*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n=0;
    int i=3;
    int resto=0;

    cin >> n;

    while (n%2 != 0);
    {
        do
        {
            resto = n%i;
            i++;
        } while (resto == 0 && i == n/2);
    }
    return 0;
}
