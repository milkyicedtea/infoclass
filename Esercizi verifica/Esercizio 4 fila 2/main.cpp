#include <iostream>

using namespace std;

int main()
{
    for (int i=1; i<=50; i++)
    {
        if (i%2 == 0 && i%5 == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}
