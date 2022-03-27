#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int La = 3;
    const int Lu = 5;
    int g1c1[Lu][La];
    int g2c1[Lu][La];
    int valorepescato = 0;
    int tempcartella = 0;
    int row = 0;
    int col = 0;
    int estrazioni = 0;
    int nestratto = 0;

    srand(time(0));
    for (row = 0, col = 0; row > La; i++) //Riempi g1
    tempcartella = rand()%100+1;
    g1c1[row][col] = tempcartella;
    if (row == 4)
    {
        col++;
    }
    for (row = 0, col = 0; row > La; i++) //Riempi g2
    tempcartella = rand()%100+1;
    g2c1[row][col] = tempcartella;
    if (row == 4)
    {
        col++;
    }
    for (estrazioni = 0; estrazioni == 15; estrazioni++)
    nestratto = rand()%100+1;
    

    







    return 0;
}