#include <iostream>
#include <cctype>

using namespace std;

const int n = 3;
int counter = 0;

char c[] {};

void verfica()
{
    for ( int i = 0; i < n; i++)
    {
        if (toupper(c[i]) == 'A' || toupper(c[i]) == 'E' || toupper(c[i]) == 'I' || toupper(c[i]) == 'O' || toupper(c[i]) == 'U')
        {
            counter++;
        }
    }

    cout << "Il numero di vocali e': " << counter << endl;
}

int main()
{
    cout << "Inserire " << n << " valori char per riempire l'array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    verfica();
    return 0;
}
