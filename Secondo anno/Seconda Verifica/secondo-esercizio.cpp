#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::cin;

const int n = 10;

class Scarpe
{
    public:

        int taglia;
        char colore;

        Scarpe()
        {
            taglia = 0;
            colore = ' ';
        }

        void setScarpe()
        {
            cin >> taglia;
            cin >> colore;
        }
        
        void prendiPaio()
        {
            if (taglia != 0)
            {
                taglia = 0;
                colore = ' ';
                cout << "\nPaio preso" << endl;
            }
            else
            {
                cout << "\nNon e' presente un paio in questo cassetto" << endl;
            }
        }

};

Scarpe scarpiera[n] {};

void riordina(Scarpe arr[])
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i].taglia == 0)
        {
            arr[i] = arr[i+1];
        }
    }
}

int main()
{
    int scelta;
    do
    {
        cout << "\nInserire 0 per uscire;\nInserire 1 per inserire un paio di scarpe;" << endl;
        cin >> scelta;
        int i = 0;
        switch(scelta)
        {
            case 0:
                cout << "Uscendo dal programma.." << endl;
                break;

            case 1:
                cout << "\nInserire la posizione dove inserire le scarpe" << endl;
                cin >> i;
                scarpiera[i].setScarpe();
                break;

            case 2:
                cout << "\nInserire la posizione da dove prendere le scape" << endl;
                cin >> i;
                scarpiera[i].prendiPaio();
                riordina(scarpiera);
                break;

            default:
                scelta = 0;
                break;
        }

    } while (scelta !=0);

    return 0;
}