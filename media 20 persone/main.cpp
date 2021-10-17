#include <iostream>

using namespace std;

int main()
{
    float etatotale;
    float etamedia;
    float numeropersone;
    float etatemp;
    float n;

    cout << "Inserire il numero totale delle persone" << endl;
    cin >> numeropersone;

    for (n=0; n <numeropersone; n=n+1)
    {
        cout << "Inserire l'eta: " << endl;
        cout << "n=" << n << endl;
        cin >> etatemp;
        etatotale= etatotale + etatemp;
    }

    etamedia=etatotale/numeropersone;
    cout << "L'eta media e' di: " << etamedia << endl;

    return 0;
}
