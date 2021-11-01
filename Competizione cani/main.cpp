#include <iostream>

using namespace std;

int main()
{
    int npettorina;
    char sesso;
    string razza;
    int punti;
    int eta;
    float media;
    int nmaschi=0;
    int maxpunti=-10;
    int nbarboncini=0;
    int pettorinavincente;
    int ncani=1;

    cout << "Inserire il numero totale dei cani" << endl;
    cin >> ncani;

    for (npettorina=1; npettorina<ncani+1; npettorina++){
    cout << "\nInserire l'eta' del cane" << endl;
    cin >> eta;
    cout << "Inserire il sesso del cane" << endl;
    cin >> sesso;
    cout << "Inserire i punti accumulati dal cane" << endl;
    cin >> punti;
    cout << "Inserire la razza del cane" << endl;
    cin >> razza;
    if (maxpunti < punti)
        {
            maxpunti = punti;
            pettorinavincente = npettorina;
        }
    if (sesso == 'm')
        {
            nmaschi++;
        }
    if (razza == "barboncino")
        {
            nbarboncini++;
        }
        else if (razza == "labrador")
            {
                cout << "Pettorina labrador n: " << npettorina << endl;
            }
    media = media + eta;
}
    //calcolo media
    media = media/ncani;
    cout << "La media delle eta' e' di: " << media << endl;
    cout << "Ci sono " << nmaschi << " maschi." << endl;
    cout << "Ci sono " << nbarboncini << " barboncini." << endl;
    cout << "Il vincitore e' il cane con la pettorina n: " << pettorinavincente;


    return 0;
}
