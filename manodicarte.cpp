#include <iostream>
#include <stdlib>
#include <ctime>


using std::cout;
using std::cin;
using std::endl;
using std::string;

const int n = 5;


class Carta
{
  private:
    string seme;
    int numero;
  public:
    Carta()  //costruttore
    {
      seme = "";
      numero = 0;

    }
  
    void SetCard()
    {
      srand(time(0));
      seme = rand()%5+1;
      numero = rand()%13+1
    }
      
}

Carta mano [n] {};

void estrazione()
{
  for (int i = 0; i < n; i++)
  {
    a[i].SetCard();
  }
}
  
  


int main()
{
  return 0;
}
