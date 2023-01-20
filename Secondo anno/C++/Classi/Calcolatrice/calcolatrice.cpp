#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

class Calcolatrice
{
    private:
        float x;
        float y;

    public:
        Calcolatrice() //def ovl
        {
            x = 0.0f;
            y = 0.0f;
        }

        Calcolatrice(float ax, float by) //ovl con parametro
        {
            x = ax;
            y = by;
        }

        void setValues(float ax, float by) //backup set
        {
            x = ax;
            y = by;
        }

        float getY() //get1
        {
            return y;
        }

        float getX() //get2
        {
            return x;
        }

        float add()
        {
            return x + y;
        }

        float sub()
        {
            return x - y;
        }

        float rad(float ax)
        {
            setValues(ax, 0.0f);
            return sqrt(ax);
        }

        float pot(float base, float exp)
        {
            setValues(base, exp);
            return pow(base, exp);
        }
};

Calcolatrice calcolatore;

int main()
{
    





    return;
}