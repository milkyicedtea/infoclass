#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int a;
    int i;

    //5 estrazioni random
    srand(time(0));
    for (i=0; i<5; i++){
        //numeri da 0 a 5
        a=rand()%6+1;
            cout << a << endl;
    }
    return 0;
}
