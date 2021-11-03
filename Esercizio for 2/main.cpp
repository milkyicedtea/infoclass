#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int i;
    int dagenerare;
    int numero;
    int numeripari=0;
    int numeridispari=0;

    cout << "Inserire quanti numeri randomici generare" << endl;
    cin >> dagenerare;

    srand(time(0));
    for (i=0; i<dagenerare; i++){
        numero=rand()%9+1;
        if (numero%2 == 0){
            numeripari++;
            } else {
                numeridispari++;
                }
    }

    cout << "I numeri pari sono: " << numeripari << endl;
    cout << "I numeri dispari sono: " << numeridispari << endl;

    return 0;
}
