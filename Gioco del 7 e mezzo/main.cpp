#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
  int ngiocatori = 0;
  do
  {
  cout << "Scegliere il numero di giocatori" << endl;
  cin >> ngiocatori;
  } while (ngiocatori == 0);
  int giocatori [10] = { };
  float punteggi [10] = { };
  float punteggiotemp=0;
  float punteggiotemp2=0;
  int i=0; //for cycle
  string turno;
  srand(time(0));
  for (i=0; i<ngiocatori; i++)   // itera sui giocatori
  {
    punteggiotemp2 = 0 ;

    do // giocatore i pesca le carte
    {
      cout << "Giocatore " << i+1 << " pesca una carta..." << endl;
      punteggiotemp = rand()%11+1;
      if (punteggiotemp >=8)
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
      }else {
          cout << "Continuare a pescare? S/N" << endl;
          cin >> turno;
        }
    } while (turno != "n" && turno != "N");

    punteggi [i] = punteggiotemp2;
  }

  return 0;
}
