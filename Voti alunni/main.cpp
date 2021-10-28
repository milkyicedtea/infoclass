#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int nstudente;
    string materia;
    int nvoti=6;
    int voto;
    char tipo;
    float media;
    int nsufficienti=0;
    int maggioridi9=0;
    int studentitotali;
    int maxmate=-10;
    int i;

    cout << "Inserire gli studenti totali" << endl;
    cin >> studentitotali;

    for (nstudente=1; nstudente<studentitotali+1; nstudente++){
        srand(time(0));
        cout << "Studente numero " << nstudente << endl;
        for (i=1; i<nvoti+1; i++){
            voto=rand()%10+1;
            media=media+voto;
            if (i>=2)
            {
                media=media/2;
            }
            cout << "Inserire la materia" << endl;
            cin >> materia;
            cout << "Inserire il tipo di voto" << endl;
            cin >> tipo;
            if (voto >= 6 )
                {
                    nsufficienti++;
                }
            if (voto > 9 && tipo == 's' || voto > 9 && tipo == 'p')
                {
                    maggioridi9++;
                }

            if (materia == "matematica" && voto > maxmate)
            {
                maxmate=voto;
            } else if (materia == "inglese")
                {
                    cout << "Voto " << tipo << " di inglese: " << voto << endl;
                }

        }
}
    if (maxmate = -10)
    {
        maxmate = 0;
    }
    cout << "La media dello studente e' di: " << media << endl;
    cout << "Il massimo dei voto in matematica e': " << maxmate << endl;
    cout << "Il totale delle verifiche sufficienti e': " << nsufficienti << endl;
    cout << "I voti scritti e pratici maggiori di nove sono: " << maggioridi9 << endl;

    return 0;
}
