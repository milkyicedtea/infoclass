#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    const int n = 49;
    int vettore[n] { };
    int a = 0;
    int i = 0;
    int temp = 0;
    int duplicati=0;

    srand(time(0));
    for (i=0; i<n; i++)
    {
        temp = rand()%50+1;
        vettore[i] = temp;
    }
    for (a = 0; a = i-1; a++)
            {
                cout << a << endl;
                if (vettore[a] == vettore[i])
                {
                    cout << vettore[i];
                }
            }



cout << "I numeri duplicati sono " << duplicati << endl;







    return 0;
}
