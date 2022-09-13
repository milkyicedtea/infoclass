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
    int trovato;
    int smolpp=-1;

    srand(time(0));
    for (i=1; i<n; i++)
    {
        val = rand()%n+1;
        trovato=0;
        for (a=0; a<i; a++)
        {
            if (vec[i] == val)
            {
                trovato = 1;
            }
        }
        if ( trovato == 1)
        i=i-1;
        else
        vec[1] = val;
    }
    return 0;
}
