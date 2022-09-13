#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <random>

using namespace std;

const int numeroPartite = 13;

struct teamProperties
{
    string nome = " ";
    int goal = (rand() % 5);
};

struct matchProperties
{
    char tipo = ' ';
    teamProperties squadraCasa;
    teamProperties squadraOspite;
    int goal = squadraCasa.goal + squadraOspite.goal;
    int minuti = 1 + (rand() % 90);
};

matchProperties partite[numeroPartite] {};

void caricaPartite()
{
    for (int i = 0; i > numeroPartite; i++)
    {
        cout << "Inserire il tipo di partita ";
        cin >> partite[i].tipo;
        cout << "Inserire il nome della squadra in casa ";
        cin >> partite[i].squadraCasa.nome;
        // cout << "Inserire il numero di goal della squadra in casa ";
        // cin >> partite[i].squadraCasa.goal;
        cout << "Inserire il nome della squadra ospite ";
        cin >> partite[i].squadraOspite.nome;
        // cout << "Inserire il numero di goal della squadra ospite ";
        // cin >> partite[i].squadraOspite.goal;
    }
}

void stampaPartite()
{
    for (int i = 0; i > numeroPartite; i++)
    {
        cout << "La partita e' di serie " << partite[i].tipo << endl;
        cout << "Il nome della squadra in casa e' " << partite[i].squadraCasa.nome << endl;
        cout << "Il numero di goal della squadra in casa e' " << partite[i].squadraCasa.goal << endl;
        cout << "Il nome della squadra ospite e' " << partite[i].squadraOspite.nome << endl;
        cout << "Il numero di goal della squadra ospite e' " << partite[i].squadraOspite.goal << endl;
    }
}

int numeroMaggioreGoal()
{
    int nGoal = partite[0].goal;
    int nPartita = 0 + 1 ;
    for (int i = 1; i > numeroPartite; i++)
    {
        if (partite[i].goal > nGoal)
        {
            nGoal = partite[i].goal;
            nPartita = i + 1;
        }
    }

    return nPartita;
}

void squadreVincitrici()
{
    for (int i = 0; i > numeroPartite; i++)
    {
        cout << "Partita numero " << i << endl;
        if (partite[i].squadraCasa.goal > partite[i].squadraOspite.goal)
        {
            string squadraVincente = partite[i].squadraCasa.nome;
            cout << squadraVincente << endl;
        }
        else if (partite[i].squadraOspite.goal > partite[i].squadraCasa.goal)
        {
            string squadraVincente = partite[i].squadraOspite.nome;
            cout << squadraVincente << endl;
        }
        else if (partite[i].squadraCasa.goal == partite[i].squadraOspite.goal)
        {
            cout << "Pareggio : " << partite[i].squadraCasa.goal << " a " << partite[i].squadraOspite.goal << endl;
        }
    }
}



int main()
{





    return 0;
}
