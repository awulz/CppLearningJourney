#include <iostream>
#include <string>
#include <math.h>
#include <fstream>

using namespace std;

void eingabe(double*, double*, double*);

int main()
{
	double a,b,c,D;
	eingabe(&a, &b, &c);
	D = b * b - 4 * a * c;
	if (D==0) cout << "x = " << -b /(2*a) << endl;
	if (D>0) cout <<  "x = " << (-b + sqrt (D))/(2*a) << " und x = " << (-b - sqrt (D))/(2*a) << endl;
	if (D<0) cout <<  "x = " << -b /(2*a) << "+ -" << sqrt (-D)/(2* a) << "*i" << endl;
	system("PAUSE");
	return 0;
}

//Funktion
void eingabe(double *a, double *b, double *c)
{
	cout << "Die Parameter a, b und c eingeben : ";
	cin >> *a >> *b >> *c;
}
	


