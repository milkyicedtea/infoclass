#include <iostream>

using namespace std;

struct studente
{
    string matricola;
    string nome;
    string cognome;
    int anni;
};

studente frocio;

void carica_studente(studente & studente)
{
    cin >> studente.matricola;
    cin >> studente.nome;
    cin >> studente.cognome;
    cin >> studente.anni;
}

int main()
{
    carica_studente(frocio);

    return 0;
}