#include <iostream>

using namespace std;

int conv(int hrs, int mts)
{
    hrs = hrs * 3600;
    mts = mts *60;

    int timeconv = hrs + mts;

    return timeconv;
}

int main()
{
    int ore = 0;
    int minuti = 0;
    int secondi = 0;

    cout << "Inserire le ore" << endl;
    cin >> ore;
    cout << "Inserire i minuti" << endl;
    cin >> minuti;
    cout << "Inserire i secondi" << endl;
    cin >> secondi;

    int totaltime = conv(ore, minuti) + secondi;

    cout << "Il tempo totale in secondi e': " << totaltime << endl;

    return 0;
}
