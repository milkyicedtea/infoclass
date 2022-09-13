#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int lanciog1=0;
    int lanciog2=0;
    int vinciteg1=0;
    int vinciteg2=0;
    int npareggi=0;

    //estrazioni
    srand(time(0));
    for (int i=1; i<10+1; i++){
        lanciog1=rand()%6+1;
            cout << "giocatore 1" << endl << lanciog1 << endl;
        lanciog2=rand()%6+1;
            cout << "giocatore 2" << endl << lanciog2 << endl;
        if (lanciog1 > lanciog2)
        {
            vinciteg1++;
            cout << "Il giocatore 1 vince il lancio numero " << i << endl;
        } else if (lanciog2 > lanciog1)
            {
                vinciteg2++;
                cout << "Il giocatore 2 vince il lancio numero " << i << endl;
            } else if (lanciog1 = lanciog2)
                {
                    npareggi++;
                    cout << "I due giocatori pareggiano al lancio numero " << i << endl;
                }
    }

    cout << "Il giocatore 1 ha vinto " << vinciteg1 << " volte, mentre il giocatore 2 ha vinto " << vinciteg2 << " volte" << endl;
    cout << "I giocatori hanno pareggiato " << npareggi << " volta/e" << endl;

    return 0;
}
