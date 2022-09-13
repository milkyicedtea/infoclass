#include <iostream>

using namespace std;

int main()
{
    float kryptuqsmolpp;
    float sommadenaro;
    float imposta;

    cout << "Inserire il valore della somma di denaro posseduta " << endl;
    cin >> sommadenaro;
    if (sommadenaro <= 5000){
        imposta=(sommadenaro*5)/100;
    }else
        if (sommadenaro > 5000 && sommadenaro <= 15000){
            imposta=(sommadenaro*8)/100;
        }else
            if (sommadenaro > 15000 && sommadenaro <= 25000){
                imposta=(sommadenaro*18)/100;
            }else
                if (sommadenaro > 25000 && sommadenaro <=35000){
                    imposta=(sommadenaro*24)/100;
                }else
                    if (sommadenaro > 35000){
                    imposta=(sommadenaro*36)/100;
                    }

    cout << "L'imposta da e' di: " << imposta << " euro." << endl;

    return 0;
}
