// Es. 320 N. 1.cpp

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N = 10;
int A[N]{};

void leggi()
{
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		A[i] = rand() % 100 + 1;
	}
}

float media()
{
	float valore_media = 0;
	for (int i = 0; i < N; i++)
	{
		if (i == 0)
		{
			valore_media = A[i];
		}
		else
		{
			valore_media += A[i];
			valore_media /= 2;
		}
	}

	return valore_media;
}

float varianza(int arr[], int n)
{
	float valore_varianza = 0;
	for (int i = 0; i < N; i++)
	{
		valore_varianza += (arr[i] - media()) * (arr[i] - media());
	}

	return valore_varianza / N;
}

void scrivi()
{
	leggi();
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "Il valore della media e': " << media() << endl;
	cout << "Il valore della varianza e': " << varianza(A, N) << endl;
}

int main()
{
	scrivi();

	return 0;
}