#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void prosumo(int, float*, float*, float*);

int main()
{
	float f[]={1.0 ,2.0 ,3.0 ,7.0}, ergp, ergs;
	prosumo(4, f, &ergp, &ergs);
	cout << " Produkt : " << ergp << ", Summe : " << ergs << endl;
	
	system("PAUSE");
	return 0;
}

//Funktion
void prosumo(int n, float *F, float *x, float *y)
{
	int i;
	*x=1.0; *y=0.0;
	for (i=0; i<n; i++)
	{
		*x *= F[i];
		*y += F[i];
	}
}

