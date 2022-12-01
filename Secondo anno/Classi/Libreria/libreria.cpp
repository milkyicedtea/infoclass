#include <iostream>

#include <cmath>

using namespace std;
class libro
{
    private:
    	string t, ce, isbn, nl;
    	float pr;
		
    public:


		libro()
		{
			t = "";
			ce = "";
			isbn = "";
			nl = "";
			pr = 0;
		}

		void titolo(string tit)
		{
			tit = t;
		}

		void copia(libro & i)
		{
			t = i.t;
			ce = i.ce;
			isbn = i.isbn;
			nl = i.nl;
			pr = i.pr;
		}
		void setlibro(string tito, string caed, string isbn2, string noml, float pre)
		{
			t = tito;
			ce = caed;
			isbn = isbn2;
			nl = noml;
			pr = pre;
		}

		string gett()
		{
			return t;
		}

		string getce()
		{
			return ce;
		}

		string getisbn()
		{
			return isbn;
		}

		string getnl()
		{
			return nl;
		}

		float getpr()
		{
			return pr;
		}

		void decrementa()
		{
			float incre;
			incre = (pr * 20) / 100;
			pr = pr - incre;
		}

		float incrementacondizioni()
		{
			float incre;
			if (pr < 15.0) {
				incre = (pr * 15) / 100;
				pr = pr + incre;
			} else {
				if (pr > 15.0 && pr < 25.0)

				{
					incre = (pr * 15) / 100;
					pr = pr + incre;
				} 
				else
				{
					if (pr > 30.0)
					{
						incre = (pr * 10) / 100;
						pr = pr + incre;
					}
				}
			}
			return pr;
		}
};
int main() {

    return 0;
}