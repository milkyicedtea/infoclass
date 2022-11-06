// L’utente inserisce un anno ed il calcolatore verifica se l’anno inserito è bisestile.
// Un anno è bisestile se è divisibile per 4 ma non per 100, oppure se è divisibile per 400
// (ad esempio il 1900 non è stato bisestile, mentre il 2000 lo è stato).

#include <iostream>

using namespace std;

int anno = 0;
bool bisestile = false;

int main()
{
    cout << "Inserire l'anno" << endl;
    cin >> anno;
    if (anno%400 == 0 && anno%4 == 0 && anno%100 == 0)
    {
        bisestile = true;
    }
    if (bisestile == false)
    {
        cout << "L'anno " << anno << " non e' bisestile" << endl;
    }
    else if (bisestile == true)
    {
        cout << "L'anno " << anno << " e' bisestile" << endl;
    }

    return 0;
}
