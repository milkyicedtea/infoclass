#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int n = 5;

char mat[n][n] {};
char arr[n*n] {};

void carica()
{
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int r = rand()%26;
            mat[i][j] =  'a' + r;
            cout << mat[i][j] << " "; //stampa matrice
        }
        cout << endl;
    }
    cout << endl;
}

void shift()
{
    for (int i = 0, j = 0; i < n; i++)
    {
        arr[i] = mat[i][j];
        cout << arr[i] << "";
    }

    for (int i = 0, j = 0; i < n; i++)
    {
        mat[i][j] = arr[i];
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " "; //stampa matrice
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    carica();
    shift();

    return 0;
}
