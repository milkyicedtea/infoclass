#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Rettangolo
{
    private:
        float base = 0.0f;
        float altezza = 0.0f;

    public:
        // constructor
        Rettangolo()
        {
            base = 0;
            altezza = 0;
        }

        Rettangolo(float a, float b)
        {
            base = b;
            altezza = a;
        }

        void Assegna(float a, float b)
        {
            base = b;
            altezza = a;
        }

        float getBase()
        {
            return base;
        }

        float getAltezza()
        {
            return altezza;
        }

        float Perimetro()
        {
            float perimetro = 0.0f;
            perimetro = 2*(base + altezza);
            return perimetro;
        }

        float Area()
        {
            float area = 0.0f;
            area = base*altezza;
            return area;
        }
};

Rettangolo tovaglia(8, 4);

int main()
{
    cout << tovaglia.getAltezza();
    return 0;
}