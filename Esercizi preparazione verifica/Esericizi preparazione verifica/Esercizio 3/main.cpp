#include <iostream>
#include <cstdlib>

using namespace std;

const int n = 3;

int N[n] {};

void diff()
{
    int max = -1000000;
    int min = 1000000;

    for (int i = 0; i < n; i++)
    {
        if (max < N[i])
        {
            max = N[i];
        }
        if (min > N[i])
        {
            min = N[i];
        }
    }
    int diff = abs(max-min);

    cout << "La differenza e': " << diff << endl;
}


int main()
{
    cout << "Inserire " << n << " numeri" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
    }

    diff();

    return 0;
}
