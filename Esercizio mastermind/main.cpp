#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N = 4;
void leggi (int[]);
int controllo (int[], int[]);
int main()
{
    int n=0, x, i, tentativi = 0, generato[N],indovinato[N];
    cout<<"Scopri il codice da 4 numeri. Inserisci numeri da 1 a 6 (premi invio ad ogni numero inserito). Hai 10 possibilita' !" << endl << "Pallino Bianco: cifra esatta nel posto sbagliato.   Pallino nero: cifra esatta nel posto giusto." << endl;
    cout << "valori" << endl;
    srand(time(0));
    for (i = 0; i < 4; i++)
    {
        x = rand()%6+1;
        cout << x;
        generato[i] = x;

    }

    while (n < 4 && tentativi < 10)
    {
        leggi(indovinato);
        n = controllo(generato, indovinato);
        tentativi++;
    }
   if(tentativi == 10)
    {
        cout << endl;
        cout << "Hai perso, riprova!";
    }
   else
    {
        cout << "hai eseguito " << tentativi << " tentativi";
    }

    return 0;
}

int controllo(int generato[], int indovinato[])
{
    int i;
    int s;
    int et = 0;
    int ft = 0;
    int gt = 0;
    int ht = 0;
    int t;
    int bianchi = 0;
    int neri = 0;
    for (i = 0; i < 4; i++)
    {
        if (generato[i] == indovinato[i])
        {
            neri = neri++;
            switch(i)
            {
                case 0:
                et++;
                break;
                case 1:
                ft++;
                break;
                case 2:
                gt++;
                break;
                case 3:
                ht++;
                break;
	        }
        }
    }
for (t = 0; t < 4; t++)
{
    for (s = 0; s < 4 && s != i; s++)
    {
        switch(t)
        {
            case 0:
            if(generato[t] == indovinato[s] && et==0)
            {
                bianchi++;
            }
            break;

            case 1:
            if(indovinato[s] == generato[t] && ft == 0)
            {
                bianchi++;
            }
            break;

            case 2:
            if(indovinato[s] == generato[t] && gt == 0)
            {
                bianchi++;
            }
            break;

            case 3:
            if(indovinato[s] == generato[t] && ht == 0)
            {
                bianchi++;
            }
            break;
        }
    }
}
if(neri == 4)
{
    cout << " Complimenti! Hai vinto!";
    cout << endl;
}
else
{
    cout << "bianchi= " << bianchi << " neri=" << neri << endl << "  No, ritenta" <<endl;

}
return neri;
}

void leggi (int indovinato[])
{
    int i;
    cout << endl << "tentativo" << endl;
    for (i=0; i<4; i++)
    {
        cout << "numero ";
        cin >> indovinato[i];
    }

    return;
}
