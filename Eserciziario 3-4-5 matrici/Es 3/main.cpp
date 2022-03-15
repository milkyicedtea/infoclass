#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int n=10;
int mat[n][n];
int v[n*n];

void carica()
{
   srand(time(0));
   for (int i = 0; i < n; i++)
   {
      for (int j = 0;j < n; j++)
      {
         mat[i][j] = rand()%101;
      }
   }
}

void print_mtx()
{
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
      {
         cout << " " << mat[i][j];
      }
      cout << endl;
   }

}



void carica_print_arr()
{
   int x = 0;
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
      {
         if (mat[i][j] > 50)
         {
            v[x] = mat[i][j];
            x++;
         }
      }
      cout << endl;
   }

   for (int i = 0; i < x; i++)
   {
      cout << " " << v[i];
   }

}

int main ()
{
    carica();
    print_mtx();
    carica_print_arr();

    return 0;
}
