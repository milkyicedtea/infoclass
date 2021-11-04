#include <iostream>

using namespace std;

int main()
{
    int n=0;
    int i;
    float resto;

    for (i=0; i<10; i++)
    {
        cout << "Inserire il numero" << endl;
        cin >> n;
        if (n%3 == 0)
        {
            n=n*n;
            cout << n << endl;;
        } else {
            if (n%5 == 0)
                {
                    n=n*n*n;
                    cout << n << endl;
                }
               }
    }

    return 0;
}
