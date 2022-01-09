// Implementare una funzione che calcola il prezzo scontato di un articolo forniti come parametri il
// prezzo e la percentuale di sconto realizzare la definizione e la chiamata alla funzione

#include <iostream>

using namespace std;

float sconto(float prezzo, float percentualedisconto)
{
    float valoresconto = (prezzo/100)*percentualedisconto;
    float prezzoscontato = prezzo - valoresconto;

    return prezzoscontato;
}





int main()
{
    float prezzo = 0;
    float percentualedisconto = 0;

    cout << "Inserire il prezzo" << endl;
    cin >> prezzo;
    cout << "Inserire la percentuale di sconto" << endl;
    cin >> percentualedisconto;

    cout << "Il prezzo (scontato) da pagare e': " << sconto(prezzo, percentualedisconto);

    return 0;
}
