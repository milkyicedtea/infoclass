#include <iostream>

using namespace std;

int main()
{
    int somma=0;
    int n=0;
    cout << "inserire il numero di valori desiderati" << endl;
    cin >> n;
    for (n; somma<n*2; somma=somma+2)
    {
        cout << somma << " ";
    }
    return 0;
}