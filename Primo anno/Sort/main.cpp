#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int n = 5;

int listanum[n] {};
int temp = 0;

void carica()
{  
    cout << "L'array disordinato e': " << endl;
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        listanum[i] = rand()%10+1;
        cout << listanum[i] << endl;
    }
}

void Insertion_sort()
{
    int j, temp;
    for(int i=1;i<n; i++)
    {
        temp=listanum[i];
        j=i-1;
        while((listanum[j]>temp) && (j>=0))
        {
            listanum[j+1]=listanum[j];
            j--;
        }

        listanum[j+1]=temp;
    }
    cout << "L'array ordinato e': " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << listanum[i] << endl;
    }
}

void Selection_sort()
{
    // Incrementa di 1 il limite inferiore del sub array da ordinare
    for (int i = 0; i < n-1; i++)
    {
        // Trova il minimo nel subarray da ordinare
        int indice_min = i;
        for (int j = i+1; j < n; j++)
        {
            // Confronto per trovare un nuovo minimo
            if (listanum[j] < listanum[indice_min])
            indice_min = j; // Salvo l'indice del nuovo minimo
        }
        // Scambia il minimo trovato con elemento i
        temp = listanum[i];
        listanum[i] = listanum[indice_min];
        listanum[indice_min] = temp;
    }
    cout << "L'array ordinato e': " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << listanum[i] << endl;
    }
}

int main()
{
    int scelta = 0;
    cout << "Inserire 0 per terminare il programma;\n1 per usare l'insertion sort;\n2 per usare il selection sort" << endl;
    cin >> scelta;
    switch(scelta)
    {
    case 0:
        cout << "Programma terminato.";
        break;
    
    case 1:
        cout << "Usando l'insertion sort.." << endl;
        carica();
        Insertion_sort();
        break;

    case 2:
        cout << "Usando il selection sort.." << endl;
        carica();
        Selection_sort();
        break;
    }
    return 0;
}