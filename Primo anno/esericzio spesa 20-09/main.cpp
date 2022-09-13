#include <iostream>

using namespace std;

//Prezzo articolo
float p;
//Quantità acquistata
float q;
//Valore Scontato
float s;
//Spesa totale
float st;
//Spesa scontata
float ss;

//SCONTARE DI 20%

int main()
{
    cout << "Inserire il prezzo dell'articolo ";
    cin >> p;
    cout << "\nInserire la quantita' desiderata ";
    cin >> q;
    st=p*q;
    s=(st*20)/100;
    ss=st-s;
    cout << "\nHai speso: " << ss;
    cout << "\nIl valore dello sconto e' di: " << s;
}
