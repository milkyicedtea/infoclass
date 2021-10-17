#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    float x1;
    float x2;
    float delta;
    float realpart;
    float imaginarypart;

    cout << "inseire il valore di a" << endl;
    cin >> a;
    cout << "inserire il valore di b" << endl;
    cin >> b;
    cout << "inserire il valore di c" << endl;
    cin >> c;

    delta=b*b - 4*a*c;

    cout << "delta" << delta << endl;

    cout << "l'equazione e':" << a << "x^2+" << b << "x+" << c << "=0" << endl << "ed il valore della x e': " << endl;
    if (delta > 0){
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    cout << "x1=" << x1 << endl << "x2=" << x2 << endl;
    }
    else if (delta == 0){
    x1= -b/(2*a);
    cout << "x1 = x2" << x1 << endl;
    }
    else {
        realpart = -b/(2*a);
        imaginarypart =sqrt(-delta)/(2*a);
        cout << "x1 = " << realpart << "+" << imaginarypart << "i" << endl;
        cout << "x2 = " << realpart << "-" << imaginarypart << "i" << endl;
    }
    return 0;
}
