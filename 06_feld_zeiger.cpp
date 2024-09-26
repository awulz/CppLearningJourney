#include <iostream>
using namespace std;

void ausgabeFeld(double *dFeld, int groesse)
{
	for(int index=0; index<groesse; index++)
		cout << dFeld[index] << endl;
	cout << endl;
}

int main()
{
   double preisObstFeld[5] = {1.45, 0.85, 2.10, 1.35, 0.55};
   double preisFischFeld[3] = {2.75, 1.65, 3.40};
   
   ausgabeFeld(preisObstFeld, 5);
   ausgabeFeld(preisFischFeld, 3);
}

