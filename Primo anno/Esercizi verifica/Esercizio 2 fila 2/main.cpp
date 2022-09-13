#include <iostream>

using namespace std;

int main()
{
    int num;
    int maggiore200=0;
    int minore30=0;

    cout << "Inserire i 10 numeri da analizzare" << endl;

    for (int i=0; i<10; i++)
    {
        cin >> num;

        if (num > 200)
        {
            maggiore200++;
        } else if (num < 30)
                {
                    minore30++;
                }
    }
    cout << "I numeri maggiori di 200 sono: " << maggiore200 << endl;
    cout << "I numeri minori di 30 sono: " << minore30 << endl;

    return 0;
}
