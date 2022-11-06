#include <iostream>

using namespace std;

int mag(int x, int y, int z)
{
    int max = -10;
    if (x > y)
    {
        max = x;
    }
    else
    {
        max = y;
    }
    if (max < z)
    {
        max = z;
    }

    return max;
}

int main()
{
    int xx = 0;
    int yy = 0;
    int zz = 0;

    cout << "Inserire xx" << endl;
    cin >> xx;
    cout << "Inserire yy" << endl;
    cin >> yy;
    cout << "Inserire zz" << endl;
    cin >> zz;

    cout << "Il maggiore è: " << mag(xx, yy, zz);

    return 0;
}
