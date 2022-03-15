#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int n = 5;

int mat[n][n] {};
int arr[n*n] {};

void carica()
{
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = rand()%101;
            cout << mat[i][j] << " "; //stampa matrice
        }
        cout << endl;
    }
    cout << endl;

    for (int x = 0; x < n; x++)
    {
        arr[x] = rand()%101;
        cout << arr[x] << " "; //stampa array
    }
    cout << endl;
}

void confronta()
{
    int contatore_uguali = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int x = 0; x < n*n; x++)
            {
                if (mat[i][j] == arr[x]) //confronta la matrice con l'array
                {
                    contatore_uguali++;
                }
            }
        }
    }
    cout << "Ci sono " << contatore_uguali << " numeri uguali" << endl;
}

int main()
{
    carica();
    confronta();

    return 0;
}
