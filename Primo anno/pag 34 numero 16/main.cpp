#include <iostream>

using namespace std;

//Ore
float h;
//Minuti
float m;
//Secondi
float s;
//Tempo totale in secondi
float st;


int main()
{
    cout << "Inserire le ore ";
    cin >> h;
    cout << "\nInserire i minuti ";
    cin >> m;
    cout << "\nInserire i secondi ";
    cin >> s;

    st=(h*3600)+(m*60)+s;
    cout << "\nIl tempo totale in secondi e' " << st;
}
