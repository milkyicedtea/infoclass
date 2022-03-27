#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include <fstream>
#include <string>
using namespace std;
const int n=10;
int mat[n][n], scelta, i, j;

void printASCII(string fileName)
{
    string line = "";
    ifstream inFile;
    inFile.open("ascii_art.txt");
    if(inFile.is_open())
    {
        while(getline(inFile,line))
        {
            cout << line << endl;
        }
    }
    else
    {
        cout<< "file non caricato" <<endl;
        cout<< "ascii non disponibile :( " <<endl;
    }
    inFile.close();
}

void carica_stampa_mat()
{
for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            mat[i][j]=rand()%10+1;
            cout<<mat[i][j]<<".";
        }
        cout<<endl;
    }
}
void shift_dx()
{
    for ( i = 0; i < n; ++i )
    {
        for ( j = n - 1; j-- > 0;)
        {
            double temp = mat[i][j+1];
            mat[i][j+1] = mat[i][j];
            mat[i][j] = temp;
        }
    }
    for (int i = 0;i<n;i++)
    {
        for (int j = 0;j<n;j++)
        {
            cout<<mat[i][j]<<".";
        }
     cout<<endl;
    }

}

void shift_sx()
{
    for ( i = 0; i < n; ++i )
    {
        for ( j = n - 1; j-->1;)
        {
            double temp = mat[i][j-1];
            mat[i][j-1] = mat[i][j];
            mat[i][j] = temp;
        }
    }
    for (int i = 0;i<n;i++)
    {
        for (int j = 0;j<n;j++)
        {
            cout<<mat[i][j]<<".";
        }
     cout<<endl;
    }

}
int main()
{
    srand(time(0));
    system("color 5f");
    string fileName="ascii_art.txt";
    printASCII(fileName);

do{

    cout<<"premi 0 per uscire dal programma"<<endl;
    cout<<"premi 1 per caricare e stampare la matrice random"<<endl;
    cout<<"premi 2 per shiftare a dx la matrice"<<endl;
    cout<<"premi 3 per shiftare a sx la matrice"<<endl;
    cin>>scelta;
    switch(scelta)
        {
            case 1:
            cout<<"hai scelto carica e stampa matrice ----->"<<endl;
            carica_stampa_mat();
            break;
            case 2:
            cout<<"hai scelto switch dx matrice -----> "<<endl;
            shift_dx();
            break;
            case 3:
            cout<<"hai scelto switch sx matrice ----->"<<endl;
            shift_sx();
            break;


        }
    }while(scelta!=0);


    return 0;

}
