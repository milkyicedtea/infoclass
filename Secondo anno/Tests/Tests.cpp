#include <iostream>

using namespace std;

int x = 0;

int main()
{
	cout << "x = " << x << ", " << "&x = " << &x << endl;
	x++;
	cout << "x = " << x << ", " << "&x = " << &x << endl;
}