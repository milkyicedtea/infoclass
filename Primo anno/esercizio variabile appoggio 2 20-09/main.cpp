#include <iostream>

using namespace std;

//Prima variabile
int x;
//Seconda variabile
int y;
//Variabile appoggio
int a;

int main()
{
    cout << "Inserire x ";
    cin >> x;
    cout << "Inserire y ";
    cin >> y;
    a=x;
    x=y;
    y=a;
    cout << "\nIl valore di x e' " << x;
    cout << "\nIl valore di y e' " << y;
}
