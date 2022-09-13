#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream>

using namespace std;

const int n = 10;

string nomi [n] {};
float incassi [n] [n] {};

void carica()
{

    for (int i = 1; i < n+1; i++)
    {
        ostringstream ss;
        ss << "Film " << i << " ";

        nomi[i] = ss.str();
        cout << nomi[i] << endl;
    }

    srand(time(0));
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 1; j < n; j++)
        {
            incassi[i][j] = rand()%100+1;

            cout << incassi[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    carica();
}
