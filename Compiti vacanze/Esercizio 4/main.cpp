// Scrivere un programma che legge due numeri e scrive tutti i divisori del primo compresi tra 1 e il
// secondo.

#include <iostream>

using namespace std;

int main()
{
    int numero1 = 0;
    int numero2 = 0;
    int i = 0;
    do
    {
        cout << "Inserire il primo numero" << endl;
        cin >> numero1;
        cout << "Inserire il secondo numero" << endl;
        cin >> numero2;
        if (numero1 < numero2)
        {
            cout << "Il primo numero deve essere maggiore del secondo!" << endl;
        }
    } while (numero1 < numero2);

    for (i = 1; i < numero2; i++)
    {
        if (numero1%i == 0)
        {
            cout << i << ", ";
        }
    }

    return 0;
}
