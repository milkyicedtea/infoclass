#include <iostream>

using namespace std;

const int n = 3;
char plain[n][n] {};

char g1 = 'O';
char g2 = 'X';

int gturno = 1;
int giocatore_vincente = 0;
int nturno = 1;

// return 0
//else return 1
//else return 2

int turno()
{
    int rigaturno = 0;
    int colonnaturno = 0;
    if (gturno == 1)
    {
        cout << "Turno del giocatore numero 1" << endl;
        gturno++;
    }
    else if (gturno == 2)
    {
        cout << "Turno del giocatore numero 2" << endl;
        gturno--;
    }

    bool occupato = false;
    do
    {
        cout << "Inserire la colonna e la riga dove si vuole posizionare il segno (min 0, max 2)" << endl << endl;
        do
        {
            cin >> rigaturno;
            if (rigaturno < 0 || rigaturno >=3)
            {
                cout << "Valore non valido" << endl;
            }
        } while(rigaturno < 0 || rigaturno >= 3);
        do
        {
            cin >> colonnaturno;
            if (colonnaturno  < 0 || colonnaturno >= 3)
            {
                cout << "Valore non valido" << endl;
            }
        } while(colonnaturno < 0 || colonnaturno >=3);
        cout << endl;
        if (plain[rigaturno][colonnaturno] == g1 || plain[rigaturno][colonnaturno] == g2)
        {
            occupato = true;
            cout << "La casella e' già occupata, inserire nuovamente le coordinate" << endl;
        }
        else
        {
            occupato = false;
        }
    }   while (occupato == true);

    int contatoresegni = 0;
    if (gturno == 2) //turno del giocatore 1 perche fa gturno++ al check
    {
        plain[rigaturno][colonnaturno] = g1;

        for (int i = 0; i < n; i++) // x
        {
            for (int j = 0; j < n; j++) // y
            {
                cout << plain[i][j];
            }
            cout << endl;
        }

        for (int i = 0, j = 0; i < n; i++) // x
        {
            // controllo orizzontale g1
            if (plain [i][j] == g1)
            {
                contatoresegni++;
                if (i == 2)
                {
                    j++;
                }
                if (contatoresegni == 3)
                {
                    giocatore_vincente = 1;
                    return giocatore_vincente;
                }
            }
        }

        contatoresegni  = 0;
        for (int j = 0, i = 0; j < n; j++) // x
        {
            // controllo verticale g1
            if (plain [i][j] == g1)
            {
                contatoresegni++;
                if (j == 2)
                {
                    i++;
                }
                if (contatoresegni == 3)
                {
                    giocatore_vincente = 1;
                    return giocatore_vincente;
                }
            }
        }
    }
    if (gturno == 1) //turno del giocatore 2 perche fa gturno-- al check
    {
        plain[rigaturno][colonnaturno] = g2;

        for (int i = 0; i < n; i++) // x
        {
            for (int j = 0; j < n; j++) // y
            {
                cout << plain[i][j];
            }
            cout << endl;
        }

        contatoresegni = 0;
        for (int i = 0, j = 0; i < n; i++) // x
        {
            // controllo orizzontale g2
            if (plain [i][j] == g2)
            {
                contatoresegni++;
                if (i == 2)
                {
                    j++;
                }
                if (contatoresegni == 3)
                {
                    giocatore_vincente = 2;
                    return giocatore_vincente;
                }
            }
        }

        contatoresegni = 0;
        for (int j = 0, i = 0; j < n; j++) // x
        {
            // controllo verticale g2
            if (plain [i][j] == g2)
            {
                contatoresegni++;
                if (j == 2)
                {
                    i++;
                }
                if (contatoresegni == 3)
                {
                    giocatore_vincente = 2;
                    return giocatore_vincente;
                }
            }
        }
    }
    nturno++;
    giocatore_vincente = 0;
    return giocatore_vincente;
}

int main()
{
    while (giocatore_vincente == 0)
    {
        turno();
    }


    if (giocatore_vincente == 1 || giocatore_vincente == 2)
    {
        cout << "Il giocatore vincente e' il giocatore " << giocatore_vincente << endl;
    }

    return 0;
}
