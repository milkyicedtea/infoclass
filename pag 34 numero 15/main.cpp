#include <iostream>
#include <cmath>

using namespace std;

//Misura del lato
float l;
//Misura del perimetro
float p;
//Misura dell'area
float a;

int main()
{
    cout << "Inserire la misura del lato ";
    cin >> l;
    p=l*3;
    a=sqrt(3)/4*l*l;
    cout << "\nLa misura del perimetro e' " << p;
    cout << "\nLa misura dell'area e' " << a;
}
