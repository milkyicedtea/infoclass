#include <iostream>

using namespace std;
float b1;
float b2;
float h;
float a;

int main()
{
    cout << "Inserisci il valore di b1 ";
    cin >> b1;
    cout << "\nInserisci il valore di b2 ";
    cin >> b2;
    cout << "\nInserisci il valore di h ";
    cin >> h;

    a=(b1+b2)/2*h;

    cout << "Valore dell'area = " << a;
    return 0;
}
