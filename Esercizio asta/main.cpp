/*Simulare un’asta in cui ci siano due compratori che si contendono l’acquisto di un oggetto,
a turno i due compratori dovranno fare un’offerta per l’oggetto da comprare,
l’asta termina quando uno dei due compratori si ritira offrendo ‘0’,
a quel punto l’altro compratore si sarà aggiudicato l’asta.
Stampare quale compratore si è aggiudicato l’asta e con che cifra.*/

#include <iostream>

using namespace std;

int main()
{
    float offerta1 = 1;
    float offerta2 = 1;

    while (offerta1 != 0 && offerta2 != 0)
    {
        cout << "Inserire l'offerta del giocatore 1..." << endl;
        cin >> offerta1;
        cout << "Il giocatore 1 offre " << offerta1 << " euro" << endl;
        cout << "Inserire l'offerta del giocatore 2..." << endl;
        cin >> offerta2;
        cout << "Il giocatore 2 offre " << offerta2 << " euro" << endl;
    }
    if (offerta1 > offerta2)
    {
        cout << "Il giocatore 1 vince l'asta offrendo " << offerta1 << " euro" << endl;
    } else if (offerta2 > offerta1)
        {
            cout << "Il giocatore 2 vince l'asta offrendo " << offerta2 << " euro" << endl;
        } else if (offerta1 == 0 && offerta2 == 0)
            {
                cout << "Entrambi i giocatori si ritirano dall'asta" << endl;
            }

    return 0;
}
