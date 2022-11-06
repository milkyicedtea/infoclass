#include <iostream>

using namespace std;

void inserisci()
{
    int num = 0;
    int count = 0;
    int sum = 0;
    
    do{
        if (count == 0)
        {
        cout << "Inserire il primo numero. Inserire il numero '0' per terminare" << endl;
        }
        else if (count != 0)
        {
            cout << "Inserire un altro numero. Inserire il numero '0' per terminare" << endl;
        }
        cin >> num;
        count++;
        sum = sum + num;
    } while (num !=0 );

    cout << "Numero di valori inseririti: " << count - 1 << endl;
    cout << "Somma dei valori: " << sum << endl;

}


int main()
{
    //Leggi una sequenza di numeri, al primo 0 incontrato determina
    //quanti numeri sono stati letti e la loro somma

    inserisci();

    return 0;
}