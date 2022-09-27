#include <iostream>

using namespace std;

const int N = 4;

struct Vini
{
  string denominazione;
  string colore;
  string origine;
  int anno_imbottigliamento;
  float gradazione;
  float prezzo;
};

Vini* pointer1 = NULL;
Vini* pointer2 = NULL;
Vini* pointer3 = NULL;
Vini* pointer4 = NULL;

Vini vino1;
Vini vino2;
Vini vino3;
Vini vino4;

Vini* arr[N] {pointer1, pointer2, pointer3, pointer4};

void carica(Vini* pp)
{
  /*cout << "Inserire la denominazione ";
  cin >> pp -> denominazione;
  cout << "Inserire il colore ";
  cin >> pp -> colore;
  cout << "Inserire l'origine ";
  cin >> pp -> origine;
  cout << "Inserire l'anno di imbottigliamente ";
  cin >> pp -> anno_imbottigliamento;
  cout << "Inserire la gradazione ";
  cin >> pp -> gradazione;*/
  cout << "Inserire il prezzo ";
  cin >> pp -> prezzo;
}

void massimo(Vini* a, Vini* b, Vini* c, Vini* d)
{
  if (a->prezzo > b->prezzo)
  {  
    if (a->prezzo > c->prezzo) 
    {  
      if (a->prezzo > d->prezzo)
      {  
        cout << a->denominazione;  
      }  
      else
      {  
        cout << cout << d->denominazione;  
      }  
    }  
  }  
  else if (b->prezzo > c->prezzo) 
  {  
    if (b->prezzo > d->prezzo) 
    {  
      cout << b->denominazione;   
    }  
    else 
    {  
      cout << d->denominazione;  
    }  
    }  
    else
    {
      if (c->prezzo > d->prezzo) 
      {  
        cout << c->denominazione; 
      }
      else
      {  
        cout << d->denominazione;
      }  
  }
}

float prezzo_medio()
{
  float media = 0;
  int i = 0;
  for (int i = 0; i < N; i++)
  {
    media =+ arr[i]->prezzo;
  }
  media/=N;

  return media;
}


int main()
{
  pointer1 = &vino1;
  pointer2 = &vino2;
  pointer3 = &vino3;
  pointer4 = &vino4;
  carica(pointer1);
  carica(pointer2);
  carica(pointer3);
  carica(pointer4);
  massimo(pointer1, pointer2, pointer3, pointer4);

  return 0;
}