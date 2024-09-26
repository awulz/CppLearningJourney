#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

struct postenTyp
{
   int anzahl;
   double preis;
   string bezeichnung;
};

int main()
{
	ofstream textDatei("datei_schreiben_beliebig.txt");

	if(textDatei)
	{
      struct postenTyp p[3] =
         { {3, 1.40, "Apfel, Bio"}, {12, 0.85, "Birne"}, {5, 0.75, "Kiwi"} };

	  textDatei << fixed << setprecision(2);
      for(int i=0; i<3; i++)
         textDatei << right << setw(4) << p[i].anzahl
            << right << setw(8) << p[i].preis << " "
            << left << setw(20) << p[i].bezeichnung << endl;
	}
	else                   
		cout << "Dateifehler" << endl;
}

