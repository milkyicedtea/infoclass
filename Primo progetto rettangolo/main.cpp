#include <iostream>

using namespace std;
float n1;
float n2;
float n3;
float somma;
float vm;

int main()
{
    cout << "inserisci n1 ";
    cin >> n1;
    cout << "\ninserisci n2 ";
    cin >> n2;
    cout << "\ninserisci n3 ";
    cin >> n3;
    somma=n1+n2+n3;
    vm=(n1+n2+n3)/3;
    cout << "\nSomma = " << somma;
    cout << "\nValore medio = " << vm;
    return 0;
}
