#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <limits>

using namespace std;


int main()
{
  int ngiocatori = 0;
  cout << "Scegliere il numero di giocatori" << endl;
  do
  {
  while (!(cin >> ngiocatori)) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
  }
  while (ngiocatori > 10)
  {
      cout << "Il numero inserito e' troppo grande (Max 10)" << endl;
      ngiocatori = 0;
  }
  } while (ngiocatori == 0);
  int punteggiomax = 0;
  int ngiocatorevincente = 0;
  int giocatori[10] = { };
  float punteggi[10] = { };
  float punteggiotemp = 0;
  float punteggiotemp2 = 0;
  int i = 0; //for cycle
  string turno = "";
  srand(time(0));
  for (i = 0; i < ngiocatori; i++)   // itera sui giocatori
  {
    punteggiotemp2 = 0 ;

    do // giocatore i pesca le carte
    {
      cout << "Giocatore " << i+1 << " pesca una carta..." << endl;
      punteggiotemp = rand()%11+1;
      if (punteggiotemp >= 8)
      {
          punteggiotemp = 0.5f;
      }
      cout << "Carta: " << punteggiotemp << endl;
      punteggiotemp2 = punteggiotemp2+punteggiotemp;
      cout << "Il punteggio totale e' di:" << punteggiotemp2 << endl;
      if (punteggiotemp2>=7.5f)
      {
          turno = "n";
          punteggiotemp2=0;
          cout << "Il punteggio del giocatore n " << i+1 << " e' andato oltre 7,5. Il punteggio sara' azzerato e si passera al prossimo giocatore." << endl;
      }else {
          cout << "Continuare a pescare? S/N" << endl;
          cin >> turno;
        }
    } while (turno != "n" && turno != "N");

    punteggi [i] = punteggiotemp2;
  }
  for (i = 0; i < ngiocatori; i++)
  {
      if (punteggiomax < punteggi[i])
      {
          punteggiomax = punteggi[1];
          ngiocatorevincente = i+1;
      }
  }




    cout << "Il giocatore vincente e' il giocatore numero " << ngiocatorevincente << " con " << punteggiomax << " punti!" << endl;
    return 0;
}
