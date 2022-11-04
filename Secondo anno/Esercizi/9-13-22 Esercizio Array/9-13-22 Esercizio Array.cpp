// uscita numeri superiori alla media
// due array con dentro maggiori e minori della media

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N = 20;
int A[N]{};    // array principale
int B[N / 2]{};    // array minori
int C[N / 2]{};    // array maggiori

void carica()
{
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        A[i] = rand() % 100 + 1;
    }
}

void prt()
{
    cout << "Array generato: " << endl;
    for (int i = 0; i < N; i++)
    {
        cout << " " << A[i];
    }
    cout << "\nArray con elementi minori della media " << endl;
    for (int i = 0; i < N / 2; i++)
    {
        if (B[i] != 0)
        {
            cout << " " << B[i];
        }
    }
    cout << "\nArray con elementi maggiori della media" << endl;
    for (int i = 0; i < N / 2; i++)
    {
        cout << " " << C[i];
    }
}

void media()
{
    int j = 0;
    int k = 0;
    int superiori_media = 0;
    int valore_media = 0;
    for (int i = 0; i < N; i++)
    {
        valore_media += A[i];
    }
    valore_media /= N;
    for (int i = 0; i < N; i++)
    {
        if (A[i] > valore_media)
        {
            C[j] = A[i];
            j++;
            superiori_media += 1;
        }
        else if (A[i] < valore_media)
        {
            B[k] = A[i];
            k++;
        }
    }
    cout << "La media e': " << valore_media << endl;
    cout << "La quantita' di numeri superiori alla media e': " << superiori_media << endl;
}

int main()
{
    carica();
    media();
    prt();

    return 0;
}