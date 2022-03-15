#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int n = 5;

int mat[n][n] {};

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
}

void minimo()
{
    int minimo = 10000000;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] < minimo)
            {
                minimo = mat[i][j];
            }
        }
    }
    cout << "Il minimo e' " << minimo << endl;
}

void massimo()
{
    int massimo = -1000000;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] > massimo)
            {
                massimo = mat[i][j];
            }
        }
    }
    cout << "Il massimo e' " << massimo << endl;
}

int main()
{
    carica();
    minimo();
    massimo();
}