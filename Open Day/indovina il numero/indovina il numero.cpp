#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int x = 0;
    int numero = 0;
    bool indovinato = false;

    srand(time(0));
    x = rand()%10+1;
    cout << "Questo programma genera un numero in modo causuale." << endl << "Per provare ad indovinare il numero inserire un numero da 1 a 10" << endl;
    cin >> numero;
    while (indovinato == false){
    cout << "Non sei riuscito ad indovinare il numero generato. Inserire un altro numero." << endl;
    cin >> numero;
    if (numero == x)
        {
            indovinato = true;
            cout << "Hai indovinato il numero!";
        }
    }
    return 0;
}