#include <iostream>

using namespace std;

int main()
{
    float spesa;
    float sconto;
    float spesascontata;

    cout << "Inserire la spesa totale ";
    cin >> spesa;

    if (spesa>=80)
    {
        sconto=(spesa*10)/100;
        spesascontata=spesa-sconto;
    }
    else
    {
        if (spesa<50)
        {
            sconto=(spesa*5)/100;
            spesascontata=spesa-sconto;
        }
        else
        {
            if (spesa<65)
            {
                sconto=(spesa*6)/100;
                spesascontata=spesa-sconto;
            }
            else
            {
                if (spesa<80)
                {
                    sconto=(spesa*7)/100;
                    spesascontata=spesa-sconto;
                }
            }
        }
    }
    cout << "\nLa spesa scontata e' di: " << spesascontata;

    return 0;
}
