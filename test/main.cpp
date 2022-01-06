#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string stringa = "12";
    stringstream intStringa(stringa);

    int stringaNumber = 0;
    intStringa >> stringaNumber;

    int result = stringaNumber+1;
    cout << result;

    return 0;
}
