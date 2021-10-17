#include <iostream>

using namespace std;

int main()
{
    float numero1;
    float numero2;

    cout << "Inserire 2 numeri" << endl;
    cin >> numero1;
    cin >> numero2;

    if (numero1-numero2 <= 0)
        cout << numero1 << " " << numero2 << endl;
    else
        cout << numero2 << " " << numero1 << endl;

    return 0;
}
