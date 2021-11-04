#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int num;
    int a;
    int valoremax=-10000;
    float media=0;

    srand(time(0));
    a=rand()%10+1;
    cout << "Il valore random e': " << a << endl;
    for (int i=0; i<20; i++)
    {
        cout << "Inserire il numero desisderato" << endl;
        cin >> num;
        media=media+num;
        //a
        if (num%a == 0)
        {
            cout << "Il numero e' divisibile per il valore x" << endl;
        }
        //b
        if (valoremax < num)
        {
            valoremax = num;
        }
        //c
        if (num%5 == 0)
        {
            cout << num << " e' multiplo di 5" << endl;
        }
        //f
        if (num%7 == 0 && num%2 == 0)
        {
            cout << num << " e' pari e multiplo di 7" << endl;
        }

    }
    media=media/20;
    cout << "La media e' di: " << media << endl;
    cout << "Il valore massimo e': " << valoremax << endl;


    return 0;
}
